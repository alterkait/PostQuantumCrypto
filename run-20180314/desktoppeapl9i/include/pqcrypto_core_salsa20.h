#ifndef pqcrypto_core_salsa20_H
#define pqcrypto_core_salsa20_H

#define pqcrypto_core_salsa20 pqcrypto_core_salsa20_impl
#define pqcrypto_core_salsa20_OUTPUTBYTES pqcrypto_core_salsa20_impl_OUTPUTBYTES
#define pqcrypto_core_salsa20_INPUTBYTES pqcrypto_core_salsa20_impl_INPUTBYTES
#define pqcrypto_core_salsa20_KEYBYTES pqcrypto_core_salsa20_impl_KEYBYTES
#define pqcrypto_core_salsa20_CONSTBYTES pqcrypto_core_salsa20_impl_CONSTBYTES
#define pqcrypto_core_salsa20_implementation pqcrypto_core_salsa20_impl_implementation
#define pqcrypto_core_salsa20_version pqcrypto_core_salsa20_impl_version
#define pqcrypto_core_salsa20_compiler pqcrypto_core_salsa20_impl_compiler

#define pqcrypto_core_salsa20_impl_OUTPUTBYTES 64
#define pqcrypto_core_salsa20_impl_INPUTBYTES 16
#define pqcrypto_core_salsa20_impl_KEYBYTES 32
#define pqcrypto_core_salsa20_impl_CONSTBYTES 16

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_core_salsa20(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_core_salsa20_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_core_salsa20_version[] __attribute__((visibility("default")));
extern const char pqcrypto_core_salsa20_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
