#ifndef crypto_sign_rainbow1c_H
#define crypto_sign_rainbow1c_H

#define crypto_sign_rainbow1c pqcrypto_sign_rainbow1c_impl
#define crypto_sign_rainbow1c_open pqcrypto_sign_rainbow1c_impl_open
#define crypto_sign_rainbow1c_keypair pqcrypto_sign_rainbow1c_impl_keypair
#define crypto_sign_rainbow1c_BYTES pqcrypto_sign_rainbow1c_impl_BYTES
#define crypto_sign_rainbow1c_PUBLICKEYBYTES pqcrypto_sign_rainbow1c_impl_PUBLICKEYBYTES
#define crypto_sign_rainbow1c_SECRETKEYBYTES pqcrypto_sign_rainbow1c_impl_SECRETKEYBYTES
#define crypto_sign_rainbow1c_DETERMINISTIC pqcrypto_sign_rainbow1c_impl_DETERMINISTIC
#define crypto_sign_rainbow1c_implementation pqcrypto_sign_rainbow1c_impl_implementation
#define crypto_sign_rainbow1c_version pqcrypto_sign_rainbow1c_impl_version
#define crypto_sign_rainbow1c_compiler pqcrypto_sign_rainbow1c_impl_compiler

#define pqcrypto_sign_rainbow1c_impl_BYTES 104
#define pqcrypto_sign_rainbow1c_impl_PUBLICKEYBYTES 192241
#define pqcrypto_sign_rainbow1c_impl_SECRETKEYBYTES 143385

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_rainbow1c(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow1c_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_rainbow1c_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_rainbow1c(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow1c_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_rainbow1c_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1c_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1c_version[] __attribute__((visibility("default")));
extern const char crypto_sign_rainbow1c_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
