#ifndef pqcrypto_kem_ramstakers756839_H
#define pqcrypto_kem_ramstakers756839_H

#define pqcrypto_kem_ramstakers756839_keypair pqcrypto_kem_ramstakers756839_impl_keypair
#define pqcrypto_kem_ramstakers756839_enc pqcrypto_kem_ramstakers756839_impl_enc
#define pqcrypto_kem_ramstakers756839_dec pqcrypto_kem_ramstakers756839_impl_dec
#define pqcrypto_kem_ramstakers756839_PUBLICKEYBYTES pqcrypto_kem_ramstakers756839_impl_PUBLICKEYBYTES
#define pqcrypto_kem_ramstakers756839_SECRETKEYBYTES pqcrypto_kem_ramstakers756839_impl_SECRETKEYBYTES
#define pqcrypto_kem_ramstakers756839_BYTES pqcrypto_kem_ramstakers756839_impl_BYTES
#define pqcrypto_kem_ramstakers756839_CIPHERTEXTBYTES pqcrypto_kem_ramstakers756839_impl_CIPHERTEXTBYTES
#define pqcrypto_kem_ramstakers756839_implementation pqcrypto_kem_ramstakers756839_impl_implementation
#define pqcrypto_kem_ramstakers756839_version pqcrypto_kem_ramstakers756839_impl_version
#define pqcrypto_kem_ramstakers756839_compiler pqcrypto_kem_ramstakers756839_impl_compiler

#define pqcrypto_kem_ramstakers756839_impl_PUBLICKEYBYTES 94637
#define pqcrypto_kem_ramstakers756839_impl_SECRETKEYBYTES 189242
#define pqcrypto_kem_ramstakers756839_impl_BYTES 32
#define pqcrypto_kem_ramstakers756839_impl_CIPHERTEXTBYTES 96167

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern "C" {
#endif

extern int pqcrypto_kem_ramstakers756839_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_ramstakers756839_enc(unsigned char *,unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_kem_ramstakers756839_dec(unsigned char *,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_kem_ramstakers756839_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_ramstakers756839_version[] __attribute__((visibility("default")));
extern const char pqcrypto_kem_ramstakers756839_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
