#ifndef pqcrypto_kem_frodokem976_H
#define pqcrypto_kem_frodokem976_H

#define pqcrypto_kem_frodokem976_keypair pqcrypto_kem_frodokem976_impl_keypair
#define pqcrypto_kem_frodokem976_enc pqcrypto_kem_frodokem976_impl_enc
#define pqcrypto_kem_frodokem976_dec pqcrypto_kem_frodokem976_impl_dec
#define pqcrypto_kem_frodokem976_PUBLICKEYBYTES pqcrypto_kem_frodokem976_impl_PUBLICKEYBYTES
#define pqcrypto_kem_frodokem976_SECRETKEYBYTES pqcrypto_kem_frodokem976_impl_SECRETKEYBYTES
#define pqcrypto_kem_frodokem976_BYTES pqcrypto_kem_frodokem976_impl_BYTES
#define pqcrypto_kem_frodokem976_CIPHERTEXTBYTES pqcrypto_kem_frodokem976_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_frodokem976_implementation pqcrypto_kem_frodokem976_impl_implementation
#define pqcrypto_kem_frodokem976_version pqcrypto_kem_frodokem976_impl_version
#define pqcrypto_kem_frodokem976_compiler pqcrypto_kem_frodokem976_impl_compiler

#define pqcrypto_kem_frodokem976_impl_PUBLICKEYBYTES 15632
#define pqcrypto_kem_frodokem976_impl_SECRETKEYBYTES 31272
#define pqcrypto_kem_frodokem976_impl_BYTES 24
#define pqcrypto_kem_frodokem976_impl_CIPHERTEXTBYTES 15768

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_frodokem976_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_frodokem976_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_frodokem976_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_frodokem976_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_frodokem976_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_frodokem976_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
