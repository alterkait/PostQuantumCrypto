#ifndef crypto_kem_newhope1024cca_H
#define crypto_kem_newhope1024cca_H

#define crypto_kem_newhope1024cca_keypair pqcrypto_kem_newhope1024cca_impl_keypair
#define crypto_kem_newhope1024cca_enc pqcrypto_kem_newhope1024cca_impl_enc
#define crypto_kem_newhope1024cca_dec pqcrypto_kem_newhope1024cca_impl_dec
#define crypto_kem_newhope1024cca_PUBLICKEYBYTES pqcrypto_kem_newhope1024cca_impl_PUBLICKEYBYTES
#define crypto_kem_newhope1024cca_SECRETKEYBYTES pqcrypto_kem_newhope1024cca_impl_SECRETKEYBYTES
#define crypto_kem_newhope1024cca_BYTES pqcrypto_kem_newhope1024cca_impl_BYTES
#define crypto_kem_newhope1024cca_CIPHERTEXTBYTES pqcrypto_kem_newhope1024cca_impl_CIPHERTEXTBYTES
#define crypto_kem_newhope1024cca_implementation pqcrypto_kem_newhope1024cca_impl_implementation
#define crypto_kem_newhope1024cca_version pqcrypto_kem_newhope1024cca_impl_version
#define crypto_kem_newhope1024cca_compiler pqcrypto_kem_newhope1024cca_impl_compiler

#define pqcrypto_kem_newhope1024cca_impl_PUBLICKEYBYTES 1824
#define pqcrypto_kem_newhope1024cca_impl_SECRETKEYBYTES 3680
#define pqcrypto_kem_newhope1024cca_impl_BYTES 32
#define pqcrypto_kem_newhope1024cca_impl_CIPHERTEXTBYTES 2208

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int crypto_kem_newhope1024cca_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_newhope1024cca_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_kem_newhope1024cca_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_kem_newhope1024cca_implementation[] __attribute__((visibility("default")));
extern const char crypto_kem_newhope1024cca_version[] __attribute__((visibility("default")));
extern const char crypto_kem_newhope1024cca_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
