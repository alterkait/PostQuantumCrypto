#ifndef pqcrypto_sign_sphincss128haraka_H
#define pqcrypto_sign_sphincss128haraka_H

#define pqcrypto_sign_sphincss128haraka pqcrypto_sign_sphincss128haraka_impl
#define pqcrypto_sign_sphincss128haraka_open pqcrypto_sign_sphincss128haraka_impl_open
#define pqcrypto_sign_sphincss128haraka_keypair pqcrypto_sign_sphincss128haraka_impl_keypair
#define pqcrypto_sign_sphincss128haraka_BYTES pqcrypto_sign_sphincss128haraka_impl_BYTES
#define pqcrypto_sign_sphincss128haraka_PUBLICKEYBYTES pqcrypto_sign_sphincss128haraka_impl_PUBLICKEYBYTES
#define pqcrypto_sign_sphincss128haraka_SECRETKEYBYTES pqcrypto_sign_sphincss128haraka_impl_SECRETKEYBYTES
#define pqcrypto_sign_sphincss128haraka_DETERMINISTIC pqcrypto_sign_sphincss128haraka_impl_DETERMINISTIC
#define pqcrypto_sign_sphincss128haraka_implementation pqcrypto_sign_sphincss128haraka_impl_implementation
#define pqcrypto_sign_sphincss128haraka_version pqcrypto_sign_sphincss128haraka_impl_version
#define pqcrypto_sign_sphincss128haraka_compiler pqcrypto_sign_sphincss128haraka_impl_compiler

#define pqcrypto_sign_sphincss128haraka_impl_BYTES 8080
#define pqcrypto_sign_sphincss128haraka_impl_PUBLICKEYBYTES 32
#define pqcrypto_sign_sphincss128haraka_impl_SECRETKEYBYTES 64

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string pqcrypto_sign_sphincss128haraka(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincss128haraka_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string pqcrypto_sign_sphincss128haraka_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int pqcrypto_sign_sphincss128haraka(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincss128haraka_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int pqcrypto_sign_sphincss128haraka_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincss128haraka_implementation[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincss128haraka_version[] __attribute__((visibility("default")));
extern const char pqcrypto_sign_sphincss128haraka_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
