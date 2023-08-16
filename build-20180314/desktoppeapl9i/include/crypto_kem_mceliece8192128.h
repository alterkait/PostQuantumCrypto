#ifndef crypto_kem_mceliece8192128_H
#define crypto_kem_mceliece8192128_H

#define crypto_kem_mceliece8192128_keypair pqcrypto_kem_mceliece8192128_impl_keypair
#define crypto_kem_mceliece8192128_enc pqcrypto_kem_mceliece8192128_impl_enc
#define crypto_kem_mceliece8192128_dec pqcrypto_kem_mceliece8192128_impl_dec
#define crypto_kem_mceliece8192128_PUBLICKEYBYTES pqcrypto_kem_mceliece8192128_impl_PUBLICKEYBYTES
#define crypto_kem_mceliece8192128_SECRETKEYBYTES pqcrypto_kem_mceliece8192128_impl_SECRETKEYBYTES
#define crypto_kem_mceliece8192128_BYTES pqcrypto_kem_mceliece8192128_impl_BYTES
#define crypto_kem_mceliece8192128_CIPHERTEXTBYTES pqcrypto_kem_mceliece8192128_impl_CIPHERTEXTBYTES
#define crypto_kem_mceliece8192128_implementation pqcrypto_kem_mceliece8192128_impl_implementation
#define crypto_kem_mceliece8192128_version pqcrypto_kem_mceliece8192128_impl_version
#define crypto_kem_mceliece8192128_compiler pqcrypto_kem_mceliece8192128_impl_compiler

#define pqcrypto_kem_mceliece8192128_impl_PUBLICKEYBYTES 1357824
#define pqcrypto_kem_mceliece8192128_impl_SECRETKEYBYTES 14080
#define pqcrypto_kem_mceliece8192128_impl_BYTES 32
#define pqcrypto_kem_mceliece8192128_impl_CIPHERTEXTBYTES 240

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_mceliece8192128_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_mceliece8192128_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_mceliece8192128_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_mceliece8192128_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_mceliece8192128_version[] __attribute__((visibility("default")));
extern const char crypto_kem_mceliece8192128_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
