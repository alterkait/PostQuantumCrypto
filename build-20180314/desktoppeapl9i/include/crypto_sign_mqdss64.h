#ifndef crypto_sign_mqdss64_H
#define crypto_sign_mqdss64_H

#define crypto_sign_mqdss64 pqcrypto_sign_mqdss64_impl
#define crypto_sign_mqdss64_open pqcrypto_sign_mqdss64_impl_open
#define crypto_sign_mqdss64_keypair pqcrypto_sign_mqdss64_impl_keypair
#define crypto_sign_mqdss64_BYTES pqcrypto_sign_mqdss64_impl_BYTES
#define crypto_sign_mqdss64_PUBLICKEYBYTES pqcrypto_sign_mqdss64_impl_PUBLICKEYBYTES
#define crypto_sign_mqdss64_SECRETKEYBYTES pqcrypto_sign_mqdss64_impl_SECRETKEYBYTES
#define crypto_sign_mqdss64_DETERMINISTIC pqcrypto_sign_mqdss64_impl_DETERMINISTIC
#define crypto_sign_mqdss64_implementation pqcrypto_sign_mqdss64_impl_implementation
#define crypto_sign_mqdss64_version pqcrypto_sign_mqdss64_impl_version
#define crypto_sign_mqdss64_compiler pqcrypto_sign_mqdss64_impl_compiler

#define pqcrypto_sign_mqdss64_impl_BYTES 67800
#define pqcrypto_sign_mqdss64_impl_PUBLICKEYBYTES 88
#define pqcrypto_sign_mqdss64_impl_SECRETKEYBYTES 48
#define pqcrypto_sign_mqdss64_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_mqdss64(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_mqdss64_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_mqdss64_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_mqdss64(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_mqdss64_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_mqdss64_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_mqdss64_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_mqdss64_version[] __attribute__((visibility("default")));
extern const char crypto_sign_mqdss64_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
