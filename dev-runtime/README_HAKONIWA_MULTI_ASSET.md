# 箱庭 複数アセット対応

## 概要

箱庭環境で複数のC2Aアセットを同時に動作させる場合、`hako_conductor_start()`は箱庭システム全体で一度だけ呼び出される必要があります。

この実装では環境変数`HAKO_CONDUCTOR_ROLE`を使用して、どのアセットがconductorを開始するかを制御します。

## 使用方法

### 1. 環境変数による制御（推奨）

複数のアセットを起動する場合：

```bash
# 最初のアセット（master役 - conductorを開始）
HAKO_CONDUCTOR_ROLE=master ./c2a_mobc

# 追加のアセット（slave役 - conductorは開始しない）
HAKO_CONDUCTOR_ROLE=slave ./c2a_subobc1
HAKO_CONDUCTOR_ROLE=slave ./c2a_subobc2
```

### 2. 従来の動作（後方互換性）

環境変数が設定されていない場合、従来通り`c2a_mobc`アセットでのみconductorが開始されます：

```bash
# 従来通りの動作
./c2a_mobc  # conductorが開始される
./c2a_subobc1  # conductorは開始されない
```

## 環境変数の値

- `HAKO_CONDUCTOR_ROLE=master` または `HAKO_CONDUCTOR_ROLE=MASTER`: このアセットがconductorを開始
- `HAKO_CONDUCTOR_ROLE=slave` または その他の値: conductorを開始しない
- 未設定: 従来の動作（c2a_mobcでのみconductor開始）

## 注意事項

1. **一意性**: 同じ箱庭環境内で複数のアセットが`master`として起動しないよう注意してください
2. **起動順序**: `master`役のアセットを最初に起動することを推奨します
3. **エラーハンドリング**: `hako_conductor_start()`が失敗した場合でもアセット登録は続行されます

## デバッグ

ログメッセージで現在の動作モードを確認できます：

```
INFO: HAKO_CONDUCTOR_ROLE=master. Starting conductor...
INFO: hako_conductor_start succeeded
```

または

```
INFO: HAKO_CONDUCTOR_ROLE=slave. Skipping conductor start (slave mode)
```
