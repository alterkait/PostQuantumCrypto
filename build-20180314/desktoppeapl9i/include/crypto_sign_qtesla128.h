#ifndef crypto_sign_qtesla128_H
#define crypto_sign_qtesla128_H

#define crypto_sign_qtesla128 pqcrypto_sign_qtesla128_impl
#define crypto_sign_qtesla128_open pqcrypto_sign_qtesla128_impl_open
#define crypto_sign_qtesla128_keypair pqcrypto_sign_qtesla128_impl_keypair
#define crypto_sign_qtesla128_BYTES pqcrypto_sign_qtesla128_impl_BYTES
#define crypto_sign_qtesla128_PUBLICKEYBYTES pqcrypto_sign_qtesla128_impl_PUBLICKEYBYTES
#define crypto_sign_qtesla128_SECRETKEYBYTES pqcrypto_sign_qtesla128_impl_SECRETKEYBYTES
#define crypto_sign_qtesla128_DETERMINISTIC pqcrypto_sign_qtesla128_impl_DETERMINISTIC
#define crypto_sign_qtesla128_implementation pqcrypto_sign_qtesla128_impl_implementation
#define crypto_sign_qtesla128_version pqcrypto_sign_qtesla128_impl_version
#define crypto_sign_qtesla128_compiler pqcrypto_sign_qtesla128_impl_compiler

#define pqcrypto_sign_qtesla128_impl_BYTES 3104
#define pqcrypto_sign_qtesla128_impl_PUBLICKEYBYTES 4128
#define pqcrypto_sign_qtesla128_impl_SECRETKEYBYTES 2112
#define pqcrypto_sign_qtesla128_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_qtesla128(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_qtesla128_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_qtesla128_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_qtesla128(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_qtesla128_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_qtesla128_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_qtesla128_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_qtesla128_version[] __attribute__((visibility("default")));
extern const char crypto_sign_qtesla128_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
