use std::env;
use std::path::PathBuf;
use c2a_bind_utils::*;

const HAKONIWA_DIR: &str = "/usr/local/include/hakoniwa/";
const HEADER_FILES: &[&str] = &["hako_asset.h", "hako_conductor.h", "hako_primitive_types.h"];

fn main() {
    println!("cargo:rerun-if-changed=src/lib.rs");
    println!("cargo:rerun-if-changed=build.rs");

    // ヘッダーファイルの変更を検知
    for header in HEADER_FILES {
        println!("cargo:rerun-if-changed={}{}", HAKONIWA_DIR, header);
    }

    // bindgenの設定
    let mut builder = bind_c2a_builder();
    for header in HEADER_FILES {
        builder = builder.header(format!("{}{}", HAKONIWA_DIR, header));
    }
    
    let bindings = builder
        .generate()
        .expect("Unable to generate bindings");

    // 生成したバインディングを出力
    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindings
        .write_to_file(out_path.join("hakoniwa_bindings.rs"))
        .expect("Failed to write bindings");

    // hakoniwa libassetsとlibconductorをリンク
    println!("cargo:return-if-changed=dev-runtime/");
    println!("cargo:rustc-link-search=/usr/local/lib/hakoniwa");
    println!("cargo:rustc-link-lib=assets");
    println!("cargo:rustc-link-lib=conductor");    
}
