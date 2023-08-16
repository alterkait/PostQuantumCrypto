#ifndef crypto_sign_luov890351_H
#define crypto_sign_luov890351_H

#define crypto_sign_luov890351 pqcrypto_sign_luov890351_impl
#define crypto_sign_luov890351_open pqcrypto_sign_luov890351_impl_open
#define crypto_sign_luov890351_keypair pqcrypto_sign_luov890351_impl_keypair
#define crypto_sign_luov890351_BYTES pqcrypto_sign_luov890351_impl_BYTES
#define crypto_sign_luov890351_PUBLICKEYBYTES pqcrypto_sign_luov890351_impl_PUBLICKEYBYTES
#define crypto_sign_luov890351_SECRETKEYBYTES pqcrypto_sign_luov890351_impl_SECRETKEYBYTES
#define crypto_sign_luov890351_DETERMINISTIC pqcrypto_sign_luov890351_impl_DETERMINISTIC
#define crypto_sign_luov890351_implementation pqcrypto_sign_luov890351_impl_implementation
#define crypto_sign_luov890351_version pqcrypto_sign_luov890351_impl_version
#define crypto_sign_luov890351_compiler pqcrypto_sign_luov890351_impl_compiler

#define pqcrypto_sign_luov890351_impl_BYTES 441
#define pqcrypto_sign_luov890351_impl_PUBLICKEYBYTES 46101
#define pqcrypto_sign_luov890351_impl_SECRETKEYBYTES 32
#define pqcrypto_sign_luov890351_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_luov890351(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_luov890351_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_luov890351_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_luov890351(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_luov890351_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_luov890351_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_luov890351_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_luov890351_version[] __attribute__((visibility("default")));
extern const char crypto_sign_luov890351_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
