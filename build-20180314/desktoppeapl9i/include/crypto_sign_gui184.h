#ifndef crypto_sign_gui184_H
#define crypto_sign_gui184_H

#define crypto_sign_gui184 pqcrypto_sign_gui184_impl
#define crypto_sign_gui184_open pqcrypto_sign_gui184_impl_open
#define crypto_sign_gui184_keypair pqcrypto_sign_gui184_impl_keypair
#define crypto_sign_gui184_BYTES pqcrypto_sign_gui184_impl_BYTES
#define crypto_sign_gui184_PUBLICKEYBYTES pqcrypto_sign_gui184_impl_PUBLICKEYBYTES
#define crypto_sign_gui184_SECRETKEYBYTES pqcrypto_sign_gui184_impl_SECRETKEYBYTES
#define crypto_sign_gui184_DETERMINISTIC pqcrypto_sign_gui184_impl_DETERMINISTIC
#define crypto_sign_gui184_implementation pqcrypto_sign_gui184_impl_implementation
#define crypto_sign_gui184_version pqcrypto_sign_gui184_impl_version
#define crypto_sign_gui184_compiler pqcrypto_sign_gui184_impl_compiler

#define pqcrypto_sign_gui184_impl_BYTES 45
#define pqcrypto_sign_gui184_impl_PUBLICKEYBYTES 422122
#define pqcrypto_sign_gui184_impl_SECRETKEYBYTES 14985

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_gui184(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_gui184_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_gui184_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_gui184(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_gui184_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_gui184_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_gui184_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_gui184_version[] __attribute__((visibility("default")));
extern const char crypto_sign_gui184_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
