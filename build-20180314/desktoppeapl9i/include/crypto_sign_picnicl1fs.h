#ifndef crypto_sign_picnicl1fs_H
#define crypto_sign_picnicl1fs_H

#define crypto_sign_picnicl1fs pqcrypto_sign_picnicl1fs_impl
#define crypto_sign_picnicl1fs_open pqcrypto_sign_picnicl1fs_impl_open
#define crypto_sign_picnicl1fs_keypair pqcrypto_sign_picnicl1fs_impl_keypair
#define crypto_sign_picnicl1fs_BYTES pqcrypto_sign_picnicl1fs_impl_BYTES
#define crypto_sign_picnicl1fs_PUBLICKEYBYTES pqcrypto_sign_picnicl1fs_impl_PUBLICKEYBYTES
#define crypto_sign_picnicl1fs_SECRETKEYBYTES pqcrypto_sign_picnicl1fs_impl_SECRETKEYBYTES
#define crypto_sign_picnicl1fs_DETERMINISTIC pqcrypto_sign_picnicl1fs_impl_DETERMINISTIC
#define crypto_sign_picnicl1fs_implementation pqcrypto_sign_picnicl1fs_impl_implementation
#define crypto_sign_picnicl1fs_version pqcrypto_sign_picnicl1fs_impl_version
#define crypto_sign_picnicl1fs_compiler pqcrypto_sign_picnicl1fs_impl_compiler

#define pqcrypto_sign_picnicl1fs_impl_BYTES 34004
#define pqcrypto_sign_picnicl1fs_impl_PUBLICKEYBYTES 33
#define pqcrypto_sign_picnicl1fs_impl_SECRETKEYBYTES 49
#define pqcrypto_sign_picnicl1fs_impl_DETERMINISTIC 1

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_sign_picnicl1fs(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_picnicl1fs_open(const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_sign_picnicl1fs_keypair(std::string *) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_sign_picnicl1fs(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_picnicl1fs_open(unsigned char *,unsigned long long *,const unsigned char *,unsigned long long,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_sign_picnicl1fs_keypair(unsigned char *,unsigned char *) __attribute__((visibility("default")));
extern const char crypto_sign_picnicl1fs_implementation[] __attribute__((visibility("default")));
extern const char crypto_sign_picnicl1fs_version[] __attribute__((visibility("default")));
extern const char crypto_sign_picnicl1fs_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
