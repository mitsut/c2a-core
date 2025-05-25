# 箱庭を用いたC2Aシミュレーション

箱庭を用いてC2Aをシミュレーションするためのメモを書いておく

## 開発環境について

- DevContainerで作成する
- C2Aは一応マルチホスト環境を目指しているが、確認環境はIntel Windowsである
- そのためコンテナはIntel 32bitビルドを前提としている
- Dockerfile

## 箱庭のビルド

- examples/hakoniwa-client　にhakoniwa-cpp-clientをsubmoduleとしている
- 全体をgit clone --recursive とするか

```bash
cd examples/hakoniwa-client
git submodule update --init --recursive
```

とする

DevConatinerで起動していればIntelのコンテナイメージでのC++の開発環境が整っているので　32bitビルドとPythonをインストールしないように以下の修正をする

### build.bashの修正
次のコメントアウトを外す
```bash
BUILD_C_FLAGS="-DCMAKE_C_FLAGS=-m32 -DCMAKE_CXX_FLAGS=-m32"
```

### install.bashの修正
次をコメントアウトする
```bash
# bash bindings/python/install.bash
```

hako-setup-check.bashでインストールされているか確認する

## 箱庭の環境変数

devcontainer.jsonですでにLD_LIBRARY_PATHが設定されているので、コンテナ内であればインストールすれば動作する

## C2Aのビルド方法

### 環境構築

1. トップディレクトリで初期セットアップを実行
```bash
bash setup.sh
```

2. 続いてmobcディレクトリで必要なツールをインストール
```bash
cd example/mobc
nvm install
corepack enable
pnpm install
```

これで環境構築は完成。その他の依存ツールはDevContainer側でインストール済み

### ビルドと実行

MOBCの実行:
```bash
cd example/mobc
cargo run
pnpm run devtools:sils
```

SUBMOBCの実行:
```bash
cd example/mobc
cargo run
```

