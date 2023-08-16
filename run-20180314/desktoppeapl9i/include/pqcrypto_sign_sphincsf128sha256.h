#ifndef pqcrypto_sign_sphincsf128sha256_H
#define pqcrypto_sign_sphincsf128sha256_H

#define pqcrypto_sign_sphincsf128sha256 pqcrypto_sign_sphincsf128sha256_impl
#define pqcrypto_sign_sphincsf128sha256_open pqcrypto_sign_sphincsf128sha256_impl_open
#define pqcrypto_sign_sphincsf128sha256_keypair pqcrypto_sign_sphincsf128sha256_impl_keypair
#define pqcrypto_sign_sphincsf128sha256_BYTES pqcrypto_sign_sphincsf128sha256_impl_BYTES
#define pqcrypto_sign_sphincsf128sha256_PUBLICKEYBYTES pqcrypto_sign_sphincsf128sha256_impl_PUBLICKEYBYTES
#define pqcrypto_sign_sphincsf128sha256_SECRETKEYBYTES pqcrypto_sign_sphincsf128sha256_impl_SECRETKEYBYTES
#define pqcrypto_sign_sphincsf128sha256_DETERMINISTIC pqcrypto_sign_sphincsf128sha256_impl_DETERMINISTIC
#define pqcrypto_sign_sphincsf128sha256_implementation pqcrypto_sign_sphincsf128sha256_impl_implementation
#define pqcrypto_sign_sphincsf128sha256_version pqcrypto_sign_sphincsf128sha256_impl_version
#define pqcrypto_sign_sphincsf128sha256_compiler pqcrypto_sign_sphincsf128sha256_impl_compiler

#define pqcrypto_sign_sphincsf128sha256_impl_BYTES 16976
#define pqcrypto_sign_sphincsf128sha256_impl_PUBLICKEYBYTES 32
#define pqcrypto_sign_sphincsf128sha256_impl_SECRETKEYBYTES 64

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_sphincsf128sha256(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincsf128sha256_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincsf128sha256_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_sphincsf128sha256(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincsf128sha256_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincsf128sha256_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincsf128sha256_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincsf128sha256_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincsf128sha256_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
