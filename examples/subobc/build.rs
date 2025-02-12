fn main() {
    // Build C2A & link
    let mut c2a_cmake = cmake::Config::new(".");
    let libc2a = c2a_cmake
        .very_verbose(true)
        .define("USE_32BIT_COMPILER", "ON")
        .define("BUILD_C2A_AS_C99", "ON")
        .define("BUILD_C2A_AS_SILS_FW", "ON")
        .define("USE_SCI_COM_WINGS", "OFF")
        .build_target("C2A");

    println!("cargo:rerun-if-changed=./CMakeLists.txt");
    println!("cargo:rerun-if-changed=./src/src_core");
    println!("cargo:rerun-if-changed=./src/src_user");

    let libc2a = libc2a.build();
    println!(
        "cargo:rustc-link-search=native={}/build", // no install step in libC2A
        libc2a.display()
    );
    println!("cargo:rustc-link-lib=static=C2A");
}
