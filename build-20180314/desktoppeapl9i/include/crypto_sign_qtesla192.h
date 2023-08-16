#ifndef crypto_sign_qtesla192_H
#define crypto_sign_qtesla192_H

#define crypto_sign_qtesla192 pqcrypto_sign_qtesla192_impl
#define crypto_sign_qtesla192_open pqcrypto_sign_qtesla192_impl_open
#define crypto_sign_qtesla192_keypair pqcrypto_sign_qtesla192_impl_keypair
#define crypto_sign_qtesla192_BYTES pqcrypto_sign_qtesla192_impl_BYTES
#define crypto_sign_qtesla192_PUBLICKEYBYTES pqcrypto_sign_qtesla192_impl_PUBLICKEYBYTES
#define crypto_sign_qtesla192_SECRETKEYBYTES pqcrypto_sign_qtesla192_impl_SECRETKEYBYTES
#define crypto_sign_qtesla192_DETERMINISTIC pqcrypto_sign_qtesla192_impl_DETERMINISTIC
#define crypto_sign_qtesla192_implementation pqcrypto_sign_qtesla192_impl_implementation
#define crypto_sign_qtesla192_version pqcrypto_sign_qtesla192_impl_version
#define crypto_sign_qtesla192_compiler pqcrypto_sign_qtesla192_impl_compiler

#define pqcrypto_sign_qtesla192_impl_BYTES 6176
#define pqcrypto_sign_qtesla192_impl_PUBLICKEYBYTES 8224
#define pqcrypto_sign_qtesla192_impl_SECRETKEYBYTES 8256
#define pqcrypto_sign_qtesla192_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_qtesla192(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_qtesla192_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_qtesla192_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_qtesla192(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_qtesla192_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_qtesla192_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_qtesla192_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_qtesla192_version[] __attribute__((visibility("default")));
extern const char crypto_sign_qtesla192_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
