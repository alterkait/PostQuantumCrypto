#ifndef crypto_kem_lightsaber_H
#define crypto_kem_lightsaber_H

#define crypto_kem_lightsaber_keypair pqcrypto_kem_lightsaber_impl_keypair
#define crypto_kem_lightsaber_enc pqcrypto_kem_lightsaber_impl_enc
#define crypto_kem_lightsaber_dec pqcrypto_kem_lightsaber_impl_dec
#define crypto_kem_lightsaber_PUBLICKEYBYTES pqcrypto_kem_lightsaber_impl_PUBLICKEYBYTES
#define crypto_kem_lightsaber_SECRETKEYBYTES pqcrypto_kem_lightsaber_impl_SECRETKEYBYTES
#define crypto_kem_lightsaber_BYTES pqcrypto_kem_lightsaber_impl_BYTES
#define crypto_kem_lightsaber_CIPHERTEXTBYTES pqcrypto_kem_lightsaber_impl_CIPHERTEXTBYTES
#define crypto_kem_lightsaber_implementation pqcrypto_kem_lightsaber_impl_implementation
#define crypto_kem_lightsaber_version pqcrypto_kem_lightsaber_impl_version
#define crypto_kem_lightsaber_compiler pqcrypto_kem_lightsaber_impl_compiler

#define pqcrypto_kem_lightsaber_impl_PUBLICKEYBYTES 672
#define pqcrypto_kem_lightsaber_impl_SECRETKEYBYTES 1568
#define pqcrypto_kem_lightsaber_impl_BYTES 32
#define pqcrypto_kem_lightsaber_impl_CIPHERTEXTBYTES 736

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_lightsaber_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_lightsaber_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_lightsaber_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_lightsaber_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_lightsaber_version[] __attribute__((visibility("default")));
extern const char crypto_kem_lightsaber_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
