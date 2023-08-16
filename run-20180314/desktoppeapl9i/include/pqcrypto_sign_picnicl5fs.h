#ifndef pqcrypto_sign_picnicl5fs_H
#define pqcrypto_sign_picnicl5fs_H

#define pqcrypto_sign_picnicl5fs pqcrypto_sign_picnicl5fs_impl
#define pqcrypto_sign_picnicl5fs_open pqcrypto_sign_picnicl5fs_impl_open
#define pqcrypto_sign_picnicl5fs_keypair pqcrypto_sign_picnicl5fs_impl_keypair
#define pqcrypto_sign_picnicl5fs_BYTES pqcrypto_sign_picnicl5fs_impl_BYTES
#define pqcrypto_sign_picnicl5fs_PUBLICKEYBYTES pqcrypto_sign_picnicl5fs_impl_PUBLICKEYBYTES
#define pqcrypto_sign_picnicl5fs_SECRETKEYBYTES pqcrypto_sign_picnicl5fs_impl_SECRETKEYBYTES
#define pqcrypto_sign_picnicl5fs_DETERMINISTIC pqcrypto_sign_picnicl5fs_impl_DETERMINISTIC
#define pqcrypto_sign_picnicl5fs_implementation pqcrypto_sign_picnicl5fs_impl_implementation
#define pqcrypto_sign_picnicl5fs_version pqcrypto_sign_picnicl5fs_impl_version
#define pqcrypto_sign_picnicl5fs_compiler pqcrypto_sign_picnicl5fs_impl_compiler

#define pqcrypto_sign_picnicl5fs_impl_BYTES 132828
#define pqcrypto_sign_picnicl5fs_impl_PUBLICKEYBYTES 65
#define pqcrypto_sign_picnicl5fs_impl_SECRETKEYBYTES 97
#define pqcrypto_sign_picnicl5fs_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_picnicl5fs(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_picnicl5fs_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_picnicl5fs_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_picnicl5fs(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_picnicl5fs_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_picnicl5fs_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_picnicl5fs_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_picnicl5fs_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_picnicl5fs_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
