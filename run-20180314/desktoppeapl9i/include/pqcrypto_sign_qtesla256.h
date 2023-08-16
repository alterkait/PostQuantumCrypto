#ifndef pqcrypto_sign_qtesla256_H
#define pqcrypto_sign_qtesla256_H

#define pqcrypto_sign_qtesla256 pqcrypto_sign_qtesla256_impl
#define pqcrypto_sign_qtesla256_open pqcrypto_sign_qtesla256_impl_open
#define pqcrypto_sign_qtesla256_keypair pqcrypto_sign_qtesla256_impl_keypair
#define pqcrypto_sign_qtesla256_BYTES pqcrypto_sign_qtesla256_impl_BYTES
#define pqcrypto_sign_qtesla256_PUBLICKEYBYTES pqcrypto_sign_qtesla256_impl_PUBLICKEYBYTES
#define pqcrypto_sign_qtesla256_SECRETKEYBYTES pqcrypto_sign_qtesla256_impl_SECRETKEYBYTES
#define pqcrypto_sign_qtesla256_DETERMINISTIC pqcrypto_sign_qtesla256_impl_DETERMINISTIC
#define pqcrypto_sign_qtesla256_implementation pqcrypto_sign_qtesla256_impl_implementation
#define pqcrypto_sign_qtesla256_version pqcrypto_sign_qtesla256_impl_version
#define pqcrypto_sign_qtesla256_compiler pqcrypto_sign_qtesla256_impl_compiler

#define pqcrypto_sign_qtesla256_impl_BYTES 6176
#define pqcrypto_sign_qtesla256_impl_PUBLICKEYBYTES 8224
#define pqcrypto_sign_qtesla256_impl_SECRETKEYBYTES 8256
#define pqcrypto_sign_qtesla256_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_qtesla256(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_qtesla256_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_qtesla256_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_qtesla256(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_qtesla256_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_qtesla256_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_qtesla256_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_qtesla256_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_qtesla256_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
