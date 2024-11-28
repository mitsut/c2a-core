#!/bin/bash -Cue

export BINSTALL_VERSION="v1.10.14"
export CARGO_NET_GIT_FETCH_WITH_CLI=true

curl -L --proto '=https' --tlsv1.2 -sSf "https://raw.githubusercontent.com/cargo-bins/cargo-binstall/${BINSTALL_VERSION}/install-from-binstall-release.sh" | env BINSTALL_VERSION=${BINSTALL_VERSION} CARGO_HOME=$(pwd) bash

cargo install --debug --root . tmtc-c2a --git https://github.com/arkedge/gaia.git --tag v0.6.1

cargo install --debug --root . tlmcmddb-cli    --version 0.2.0
cargo install --debug --root . kble            --version 0.2.0
cargo install --debug --root . kble-c2a        --version 0.2.0
cargo install --debug --root . kble-eb90       --version 0.2.0
cargo install --debug --root . jrsonnet        --version 0.5.0-pre9 --locked
