# C2A Documents

## 本ドキュメントの役割
これは， C2A についてのドキュメントです．

C2A に関する説明の棲み分けは，次のようになっています．

- C2A のコードとそのコメント
    - マスター情報
    - 変数や構造体，関数などの定義などを Doxygen 形式で記述
- C2A リファレンス: https://github.com/ut-issl/c2a-reference
    - C2A のコードから自動生成されるもの (Doxygen)
    - 変数や構造体の定義，関数の相関図なども閲覧可能
- 本ドキュメント
    - マスター情報はコードとそのコメントなため，それを補足する情報など
        - C2A 全体の説明
        - 設計思想
        - 規則など
        - 操作方法や設定方法などの手順
        - などなど
    - したがって，マスター情報の二重管理を避けるため，本ドキュメントには，変数定義の説明などは記載しないこと！

以上より，本ドキュメントと合わせてコードを見ることを推奨する．  
（@ドキュメント記入者: 各ドキュメントから関連コードにリンクが張ってある状態が望ましい．）


## 目次

1. General Information
    1. [Overview](./general/overview.md)
    1. [Release](./general/release.md)
    1. [Coding Rule](./general/coding_rule.md)
    1. [Coding Acronyms](./general/coding_acronyms.md)
1. Application Layer
    1. [Overview](./application/overview.md)
    1. How to add a application
1. Core Layer
    1. Overview
    1. [Communication](./core/communication.md)
    1. [Tips](./core/tips.md)
1. Driver
    1. [Overview](./driver/overview.md)
    1. [Communication with Components](./driver/communication_with_components.md)
1. SILS
    1. Overview
    1. [S2E Integration](./sils/s2e_integration.md)
1. Tips
    1. [Parameter Settings](./tips/parameter_settings.md)
1. Tools
    1. [Overview](./tools/overview.md)
