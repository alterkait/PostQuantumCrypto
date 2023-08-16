#ifndef crypto_core_salsa20_H
#define crypto_core_salsa20_H

#define crypto_core_salsa20 pqcrypto_core_salsa20_impl
#define crypto_core_salsa20_OUTPUTBYTES pqcrypto_core_salsa20_impl_OUTPUTBYTES
#define crypto_core_salsa20_INPUTBYTES pqcrypto_core_salsa20_impl_INPUTBYTES
#define crypto_core_salsa20_KEYBYTES pqcrypto_core_salsa20_impl_KEYBYTES
#define crypto_core_salsa20_CONSTBYTES pqcrypto_core_salsa20_impl_CONSTBYTES
#define crypto_core_salsa20_implementation pqcrypto_core_salsa20_impl_implementation
#define crypto_core_salsa20_version pqcrypto_core_salsa20_impl_version
#define crypto_core_salsa20_compiler pqcrypto_core_salsa20_impl_compiler

#define pqcrypto_core_salsa20_impl_OUTPUTBYTES 64
#define pqcrypto_core_salsa20_impl_INPUTBYTES 16
#define pqcrypto_core_salsa20_impl_KEYBYTES 32
#define pqcrypto_core_salsa20_impl_CONSTBYTES 16

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_core_salsa20(unsigned char *,const unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_core_salsa20_implementation[] __attribute__((visibility("default")));
extern const char crypto_core_salsa20_version[] __attribute__((visibility("default")));
extern const char crypto_core_salsa20_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
