#ifndef crypto_rng_salsa20_H
#define crypto_rng_salsa20_H

#define crypto_rng_salsa20 pqcrypto_rng_salsa20_impl
#define crypto_rng_salsa20_KEYBYTES pqcrypto_rng_salsa20_impl_KEYBYTES
#define crypto_rng_salsa20_OUTPUTBYTES pqcrypto_rng_salsa20_impl_OUTPUTBYTES
#define crypto_rng_salsa20_implementation pqcrypto_rng_salsa20_impl_implementation
#define crypto_rng_salsa20_version pqcrypto_rng_salsa20_impl_version
#define crypto_rng_salsa20_compiler pqcrypto_rng_salsa20_impl_compiler

#define pqcrypto_rng_salsa20_impl_KEYBYTES 32
#define pqcrypto_rng_salsa20_impl_OUTPUTBYTES 736

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_rng_salsa20(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_rng_salsa20_implementation[] __attribute__((visibility("default")));
extern const char crypto_rng_salsa20_version[] __attribute__((visibility("default")));
extern const char crypto_rng_salsa20_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
