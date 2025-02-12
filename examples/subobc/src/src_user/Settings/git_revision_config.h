#ifndef GIT_REVISION_CONFIG_H_
#define GIT_REVISION_CONFIG_H_

/**
 * src/src_user/Settings/git_revision_config.hは自動生成される場合と設定だけを書く場合があります．
 * C2A core/userのcommit hashはコマンドラインオプションないしこのファイルでdefineされ，
 * 実際の埋め込みについてはsrc_core/Librari/git_revision.hとsrc_core/c2a_core_main.cが制御します．
 * このexample userのファイルは例・ドキュメントなので，実際の内容は各C2A userで判断してください(そのままコピペしないでください)．
 * 混乱を避けるため，実際の各C2A userで使う設定のみ記述してください．
 */

#if 1 // このexample userはCMakeでビルドするのでこれを使う
/*!< @brief CMakeでビルドする時など，コマンドラインオプションからcommit hashを流し込む場合の設定
 * この場合，以下の定数をコマンドラインオプション(-D)などで設定してください
 *   GIT_REVISION_C2A_CORE          C2A coreのcommit hash(文字列)
 *   GIT_REVISION_C2A_CORE_SHORT    C2A coreのcommit hash short(0xから始まる数値)
 *   GIT_REVISION_C2A_USER          C2A userのcommit hash(文字列)
 *   GIT_REVISION_C2A_USER_SHORT    C2A userのcommit hash short(0xから始まる数値)
 */

#define C2A_GIT_REVISION_FROM_OPTION
#endif // from option

#if 0
/*!< @brief このファイルを自動生成する場合
 * src_user/script/git/revision.sh/batが以下のような内容でsrc/src_user/Settings/git_revision_config.hを生成します
 * 注意!!!: この場合はsrc/src_user/Settings/git_revision_config.hは自分で記述しないでください
 *          また，基本的にGitで管理する必要がないです(gitignoreしてください)．
 */

/* This file is generated by src_user/script/git/revision.sh */
#define C2A_GIT_REVISION_GENERATED

#define GIT_REVISION_C2A_CORE "1234567890123456789012345678901234567890"
#define GIT_REVISION_C2A_CORE_SHORT 0x1234567
#define GIT_REVISION_C2A_USER "1234567890123456789012345678901234567890"
#define GIT_REVISION_C2A_USER_SHORT 0x1234567
#endif // generated version

#if 0
/*!< @brief commit hashを埋め込まない場合の設定
 * 実際には0が埋め込まれます．詳細はsrc/src_core/library/git_revision.hを参照してください．
 */

#define C2A_GIT_REVISION_IGNORE
#endif

#endif // GIT_REVISION_CONFIG_H_
