#ifndef crypto_sign_gui448_H
#define crypto_sign_gui448_H

#define crypto_sign_gui448 pqcrypto_sign_gui448_impl
#define crypto_sign_gui448_open pqcrypto_sign_gui448_impl_open
#define crypto_sign_gui448_keypair pqcrypto_sign_gui448_impl_keypair
#define crypto_sign_gui448_BYTES pqcrypto_sign_gui448_impl_BYTES
#define crypto_sign_gui448_PUBLICKEYBYTES pqcrypto_sign_gui448_impl_PUBLICKEYBYTES
#define crypto_sign_gui448_SECRETKEYBYTES pqcrypto_sign_gui448_impl_SECRETKEYBYTES
#define crypto_sign_gui448_DETERMINISTIC pqcrypto_sign_gui448_impl_DETERMINISTIC
#define crypto_sign_gui448_implementation pqcrypto_sign_gui448_impl_implementation
#define crypto_sign_gui448_version pqcrypto_sign_gui448_impl_version
#define crypto_sign_gui448_compiler pqcrypto_sign_gui448_impl_compiler

#define pqcrypto_sign_gui448_impl_BYTES 83
#define pqcrypto_sign_gui448_impl_PUBLICKEYBYTES 5903405
#define pqcrypto_sign_gui448_impl_SECRETKEYBYTES 94757

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_gui448(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_gui448_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_gui448_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_gui448(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_gui448_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_gui448_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_gui448_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_gui448_version[] __attribute__((visibility("default")));
extern const char crypto_sign_gui448_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
