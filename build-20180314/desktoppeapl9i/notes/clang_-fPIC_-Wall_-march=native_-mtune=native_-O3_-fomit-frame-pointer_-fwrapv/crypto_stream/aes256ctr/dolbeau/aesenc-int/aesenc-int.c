aesenc-int.c:81:20: warning: unused function 'aesni_encrypt1' [-Wunused-function]
static inline void aesni_encrypt1(unsigned char *out, unsigned char *n, __m128i rkeys[16]) {
                   ^
aesenc-int.c:97:20: warning: unused function 'incle' [-Wunused-function]
static inline void incle(unsigned char n[16]) {
                   ^
aesenc-int.c:195:1: warning: unused function 'aesni_encrypt4' [-Wunused-function]
FUNC(4, MAKE4)
^
aesenc-int.c:172:22: note: expanded from macro 'FUNC'
  static inline void aesni_encrypt##N(unsigned char *out, unsigned char *n, __m128i rkeys[16]) { \
                     ^
<scratch space>:377:1: note: expanded from here
aesni_encrypt4
^
aesenc-int.c:196:1: warning: unused function 'aesni_encrypt6' [-Wunused-function]
FUNC(6, MAKE6)
^
aesenc-int.c:172:22: note: expanded from macro 'FUNC'
  static inline void aesni_encrypt##N(unsigned char *out, unsigned char *n, __m128i rkeys[16]) { \
                     ^
<scratch space>:3:1: note: expanded from here
aesni_encrypt6
^
aesenc-int.c:197:1: warning: unused function 'aesni_encrypt7' [-Wunused-function]
FUNC(7, MAKE7)
^
aesenc-int.c:172:22: note: expanded from macro 'FUNC'
  static inline void aesni_encrypt##N(unsigned char *out, unsigned char *n, __m128i rkeys[16]) { \
                     ^
<scratch space>:76:1: note: expanded from here
aesni_encrypt7
^
aesenc-int.c:199:1: warning: unused function 'aesni_encrypt10' [-Wunused-function]
FUNC(10, MAKE10)
^
aesenc-int.c:172:22: note: expanded from macro 'FUNC'
  static inline void aesni_encrypt##N(unsigned char *out, unsigned char *n, __m128i rkeys[16]) { \
                     ^
<scratch space>:258:1: note: expanded from here
aesni_encrypt10
^
aesenc-int.c:200:1: warning: unused function 'aesni_encrypt12' [-Wunused-function]
FUNC(12, MAKE12)
^
aesenc-int.c:172:22: note: expanded from macro 'FUNC'
  static inline void aesni_encrypt##N(unsigned char *out, unsigned char *n, __m128i rkeys[16]) { \
                     ^
<scratch space>:379:1: note: expanded from here
aesni_encrypt12
^
7 warnings generated.
