# 箱庭を用いたC2Aシミュレーション

箱庭を用いてC2Aをシミュレーションするためのメモを書いておく

## 開発環境について

- DevContainerで作成する
- C2Aは一応マルチホスト環境を目指しているが、確認環境はIntel Windowsである
- ~~そのためコンテナはIntel 32bitビルドを前提としている~~ 64bitビルドに変更しました
- hakoniwa-core-cpp-clientをexampesフォルダにsubmoduleでおいている

## 箱庭のビルド

- examples/hakoniwa-client　にhakoniwa-cpp-clientをsubmoduleとしている
- 全体をgit clone --recursive とするか

```bash
cd examples/hakoniwa-client
git submodule update --init --recursive
```

とする

### install.bashの修正
次をコメントアウトする
```bash
# bash bindings/python/install.bash
```
### ビルドとインストール
```bash
bash install.bash
```

hako-setup-check.bashでインストールされているか確認する
```bash
bash hako-setup-check.bash
```

## 箱庭の環境変数

devcontainer.jsonですでにLD_LIBRARY_PATHとPATHが設定されているので、コンテナ内であればインストールすれば動作する

```bash
hako-cmd
Usage: hako-cmd {start|stop|reset|status|pmeta|plog|dump <cid>|restore <cid> <bin>}|real_cid <asset_name> <cid>
```

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
- ターミナルを4分割して起動します
  1. MOBC
  1. SUBOBC
  1. hako-pdu-logger
  1. hako-cmd実行用

1. MOBCの実行:
```bash
cd example/mobc
cargo run
```
もしくは、WebSocketを含めたMOBCの実行
```
pnpm run devtools:sils
```
hakoniwaのスタート待ちになるので、ブラウザを起動する

[http://localhost:8900/devtools/telemetries/RT.MOBC.HK](http://localhost:8900/devtools/telemetries/RT.MOBC.HK)

2. SUBOBCの実行（ターミナル）:
```bash
cd example/subobc
cargo run
```

4. hako-cmdの実行（ターミナル）：
```
hako-cmd start
```
