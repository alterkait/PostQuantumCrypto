#ifndef pqcrypto_sign_qtesla192_H
#define pqcrypto_sign_qtesla192_H

#define pqcrypto_sign_qtesla192 pqcrypto_sign_qtesla192_impl
#define pqcrypto_sign_qtesla192_open pqcrypto_sign_qtesla192_impl_open
#define pqcrypto_sign_qtesla192_keypair pqcrypto_sign_qtesla192_impl_keypair
#define pqcrypto_sign_qtesla192_BYTES pqcrypto_sign_qtesla192_impl_BYTES
#define pqcrypto_sign_qtesla192_PUBLICKEYBYTES pqcrypto_sign_qtesla192_impl_PUBLICKEYBYTES
#define pqcrypto_sign_qtesla192_SECRETKEYBYTES pqcrypto_sign_qtesla192_impl_SECRETKEYBYTES
#define pqcrypto_sign_qtesla192_DETERMINISTIC pqcrypto_sign_qtesla192_impl_DETERMINISTIC
#define pqcrypto_sign_qtesla192_implementation pqcrypto_sign_qtesla192_impl_implementation
#define pqcrypto_sign_qtesla192_version pqcrypto_sign_qtesla192_impl_version
#define pqcrypto_sign_qtesla192_compiler pqcrypto_sign_qtesla192_impl_compiler

#define pqcrypto_sign_qtesla192_impl_BYTES 6176
#define pqcrypto_sign_qtesla192_impl_PUBLICKEYBYTES 8224
#define pqcrypto_sign_qtesla192_impl_SECRETKEYBYTES 8256
#define pqcrypto_sign_qtesla192_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_qtesla192(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_qtesla192_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_qtesla192_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_qtesla192(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_qtesla192_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_qtesla192_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_qtesla192_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_qtesla192_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_qtesla192_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
