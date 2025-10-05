use std::{thread, time, env, path::Path};

// バインディングのインクルード
#[allow(non_upper_case_globals)]
#[allow(non_camel_case_types)]
#[allow(non_snake_case)]
mod hakoniwa {
    include!(concat!(env!("OUT_DIR"), "/hakoniwa_bindings.rs"));
}
use hakoniwa::*;

const UPDATE_BATCH_SIZE: usize = 100;
const UPDATE_BATCH_IN_REALTIME: time::Duration = time::Duration::from_millis(100);

// フォルダ名からアセット名を生成する関数
fn generate_asset_name() -> String {
    // デバッグ出力：CARGO_MANIFEST_DIRの値を表示
    println!("DEBUG: Trying to get CARGO_MANIFEST_DIR...");
    match env::var("CARGO_MANIFEST_DIR") {
        Ok(manifest_dir) => {
            println!("DEBUG: CARGO_MANIFEST_DIR = {}", manifest_dir);
            let path = Path::new(&manifest_dir);
            
            // コンポーネントをすべて表示（デバッグ用）
            // println!("DEBUG: Path components:");
            // for comp in path.components() {
            //     if let Some(comp_str) = comp.as_os_str().to_str() {
            //         println!("DEBUG: - {}", comp_str);
            //     }
            // }
            
            // パスからフォルダ名を取得
            if let Some(folder_name) = path.components()
                .filter_map(|comp| comp.as_os_str().to_str())
                .find(|&name| name == "mobc" || name.starts_with("subobc")) {
                println!("DEBUG: Found target folder: {}", folder_name);
                return format!("c2a_{}", folder_name);
            }
        },
        Err(e) => {
            println!("DEBUG: Failed to get CARGO_MANIFEST_DIR: {}", e);
        }
    }
    
    // 方法2: 現在の作業ディレクトリから取得を試みる
    println!("DEBUG: Trying current_dir method...");
    if let Ok(current_dir) = env::current_dir() {
        println!("DEBUG: Current dir = {}", current_dir.display());
        
        // コンポーネントをすべて表示（デバッグ用）
        println!("DEBUG: Path components:");
        for component in current_dir.components() {
            if let Some(name) = component.as_os_str().to_str() {
                println!("DEBUG: - {}", name);
                if name == "mobc" || name.starts_with("mobc-") {
                    println!("DEBUG: Found target folder: {}", name);
                    return format!("c2a_{}", name);
                }
            }
        }
    } else {
        println!("DEBUG: Failed to get current_dir");
    }
    
    // フォルダ名が特定できない場合はデフォルト値を返す
    println!("DEBUG: Using default asset name: c2a_asset");
    "c2a_asset".to_string()
}

// C2A用のコールバック関数
extern "C" fn on_initialize(_context: *mut hako_asset_context_t) -> ::std::os::raw::c_int {
    println!("INFO: C2A on_initialize enter");
    println!("INFO: C2A initialization");
    // 必要な初期化処理をここで行う
    println!("INFO: C2A on_initialize exit");
    0
}

extern "C" fn on_reset(_context: *mut hako_asset_context_t) -> ::std::os::raw::c_int {
    println!("INFO: C2A on_reset enter");
    // リセット処理
    println!("INFO: C2A on_reset exit");
    0
}

extern "C" fn on_simulation_step(_context: *mut hako_asset_context_t) -> ::std::os::raw::c_int {
    unsafe {
        let time = hako_asset_simulation_time();
        // if time % 1000000 == 0 {  // 1秒ごとに表示（マイクロ秒単位）
        //     println!("INFO: C2A simulation step: time={}", time);
        // }
        use c2a_core::*;

        let start = time::Instant::now();
        for _ in 0..UPDATE_BATCH_SIZE {
            // ネストしたunsafeブロックを削除
            system::time_manager::TMGR_count_up_master_clock();
            C2A_core_main();
        }
        let elapsed_time = start.elapsed();
        if elapsed_time < UPDATE_BATCH_IN_REALTIME {
            let duration_to_sleep = UPDATE_BATCH_IN_REALTIME - elapsed_time;
            thread::sleep(duration_to_sleep);
        }

    }
    0
}

pub fn c2a_init() {
    use c2a_core::*;
    
    // C2A初期化関数を明示的にc2a_core::から呼び出す
    // C2A_core_initはc2a-coreクレートが提供する関数
    unsafe {
        system::watchdog_timer::WDT_init();
        system::time_manager::TMGR_init(); // Time Manager
    }

    unsafe {
        C2A_core_init();
    }


    // TaskDispatcherでの大量のアノマリを避けるために、一度時刻を初期化する。
    unsafe {
        system::time_manager::TMGR_clear();
    }
    println!("C2A_init: TMGR_init done.");
}

pub fn c2a_main() {
    // 未使用のimportを削除
    use c2a_core::*;

    // フォルダ名に基づいてアセット名を動的に生成
    let asset_name_str = generate_asset_name();
    println!("INFO: Using asset name: {}", asset_name_str);
    
    // asset_name_str を比較に使うので、クローンして所有権を保持
    let asset_name = std::ffi::CString::new(asset_name_str.clone()).unwrap();
    let config_path = std::ffi::CString::new("custom.json").unwrap();
    
    // Hakoniwa初期化とシミュレータの時間刻み
    let delta_time_usec: hako_time_t = 1000 * 100; // 100ms

    // asset_name_str が "c2a_mobc"の場合、以下を実行する
    if asset_name_str == "c2a_mobc" {
        println!("INFO: c2a_mobc detected, using custom configuration");
        
        // 初期化前にHakoniwaのライブラリが見つかるか確認
        let result = unsafe { hako_conductor_start(delta_time_usec, delta_time_usec) };
        if result != 0 {
            println!("WARNING: hako_conductor_start failed with code: {}", result);
            println!("This might indicate Hakoniwa libraries are not found correctly");
        } else {
            println!("INFO: hako_conductor_start succeeded");
        }
    } else {
        println!("INFO: Using default configuration for {}", asset_name_str);
    }
    
    // コールバック構造体の設定
    let mut callbacks = hako_asset_callbacks_t {
        on_initialize: Some(on_initialize),
        on_reset: Some(on_reset),
        on_simulation_step: Some(on_simulation_step),
        on_manual_timing_control: None,
    };
    
    let ret = unsafe {
        hako_asset_register(
            asset_name.as_ptr(),
            config_path.as_ptr(),
            &mut callbacks,
            delta_time_usec,
            HakoAssetModelType_HAKO_ASSET_MODEL_CONTROLLER
        )
    };
    
    if ret != 0 {
        println!("ERROR: hako_asset_register() returns {}", ret);
    } else {
        println!("INFO: C2A asset registered successfully");
        
        // アセットの開始
        let start_ret = unsafe { hako_asset_start() };
        println!("INFO: hako_asset_start() returns {}", start_ret);
    }

    // loop {
    //     let start = time::Instant::now();
    //     for _ in 0..UPDATE_BATCH_SIZE {
    //         unsafe {
    //             system::time_manager::TMGR_count_up_master_clock();
    //             C2A_core_main();
    //         }
    //     }
    //     let elapsed_time = start.elapsed();
    //     if elapsed_time < UPDATE_BATCH_IN_REALTIME {
    //         let duration_to_sleep = UPDATE_BATCH_IN_REALTIME - elapsed_time;
    //         thread::sleep(duration_to_sleep);
    //     }
    //     // FIXME: 時間がめっちゃ遅れてたときの時間回復は一旦しない
    // }
}
