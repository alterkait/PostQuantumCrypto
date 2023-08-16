#ifndef crypto_kem_newhope512cca_H
#define crypto_kem_newhope512cca_H

#define crypto_kem_newhope512cca_keypair pqcrypto_kem_newhope512cca_impl_keypair
#define crypto_kem_newhope512cca_enc pqcrypto_kem_newhope512cca_impl_enc
#define crypto_kem_newhope512cca_dec pqcrypto_kem_newhope512cca_impl_dec
#define crypto_kem_newhope512cca_PUBLICKEYBYTES pqcrypto_kem_newhope512cca_impl_PUBLICKEYBYTES
#define crypto_kem_newhope512cca_SECRETKEYBYTES pqcrypto_kem_newhope512cca_impl_SECRETKEYBYTES
#define crypto_kem_newhope512cca_BYTES pqcrypto_kem_newhope512cca_impl_BYTES
#define crypto_kem_newhope512cca_CIPHERTEXTBYTES pqcrypto_kem_newhope512cca_impl_CIPHERTEXTBYTES
#define crypto_kem_newhope512cca_implementation pqcrypto_kem_newhope512cca_impl_implementation
#define crypto_kem_newhope512cca_version pqcrypto_kem_newhope512cca_impl_version
#define crypto_kem_newhope512cca_compiler pqcrypto_kem_newhope512cca_impl_compiler

#define pqcrypto_kem_newhope512cca_impl_PUBLICKEYBYTES 928
#define pqcrypto_kem_newhope512cca_impl_SECRETKEYBYTES 1888
#define pqcrypto_kem_newhope512cca_impl_BYTES 32
#define pqcrypto_kem_newhope512cca_impl_CIPHERTEXTBYTES 1120

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_newhope512cca_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_newhope512cca_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_newhope512cca_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_newhope512cca_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_newhope512cca_version[] __attribute__((visibility("default")));
extern const char crypto_kem_newhope512cca_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
