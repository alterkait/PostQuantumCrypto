#ifndef crypto_rng_aes256_H
#define crypto_rng_aes256_H

#define crypto_rng_aes256 pqcrypto_rng_aes256_impl
#define crypto_rng_aes256_KEYBYTES pqcrypto_rng_aes256_impl_KEYBYTES
#define crypto_rng_aes256_OUTPUTBYTES pqcrypto_rng_aes256_impl_OUTPUTBYTES
#define crypto_rng_aes256_implementation pqcrypto_rng_aes256_impl_implementation
#define crypto_rng_aes256_version pqcrypto_rng_aes256_impl_version
#define crypto_rng_aes256_compiler pqcrypto_rng_aes256_impl_compiler

#define pqcrypto_rng_aes256_impl_KEYBYTES 32
#define pqcrypto_rng_aes256_impl_OUTPUTBYTES 736

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_rng_aes256(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_rng_aes256_implementation[] __attribute__((visibility("default")));
extern const char crypto_rng_aes256_version[] __attribute__((visibility("default")));
extern const char crypto_rng_aes256_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
