#ifdef C2A_STDINT_H_
#define C2A_STDINT_H_

// C99 stdint.h ないしはそれと同等のヘッダへのラッパー用ヘッダ
// 実機向けのコンパイラが C89 であるときのみ使用すること（CMake では C2A_USE_C99_STDINT=OFF すること）

#ifdef SILS_FW
#include <stdint.h> // このヘッダを使う OBC であっても，SILS 環境下では C99 stdint.h が存在することが期待できる
#else
#include <src_user/Library/stdint_impl.h>   // 真に C89 環境下では C2A user で C99 stdint.h と同等の型を提供する
#endif // SILS_FW

#endif // C2A_STDINT_H_
