#ifndef crypto_stream_aes256ctr_H
#define crypto_stream_aes256ctr_H

#define crypto_stream_aes256ctr pqcrypto_stream_aes256ctr_impl
#define crypto_stream_aes256ctr_xor pqcrypto_stream_aes256ctr_impl_xor
#define crypto_stream_aes256ctr_beforenm pqcrypto_stream_aes256ctr_impl_beforenm
#define crypto_stream_aes256ctr_afternm pqcrypto_stream_aes256ctr_impl_afternm
#define crypto_stream_aes256ctr_xor_afternm pqcrypto_stream_aes256ctr_impl_xor_afternm
#define crypto_stream_aes256ctr_KEYBYTES pqcrypto_stream_aes256ctr_impl_KEYBYTES
#define crypto_stream_aes256ctr_NONCEBYTES pqcrypto_stream_aes256ctr_impl_NONCEBYTES
#define crypto_stream_aes256ctr_BEFORENMBYTES pqcrypto_stream_aes256ctr_impl_BEFORENMBYTES
#define crypto_stream_aes256ctr_implementation pqcrypto_stream_aes256ctr_impl_implementation
#define crypto_stream_aes256ctr_version pqcrypto_stream_aes256ctr_impl_version
#define crypto_stream_aes256ctr_compiler pqcrypto_stream_aes256ctr_impl_compiler

#define pqcrypto_stream_aes256ctr_impl_KEYBYTES 32
#define pqcrypto_stream_aes256ctr_impl_NONCEBYTES 16

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_stream_aes256ctr(size_t,const std::string &,const std::string &) __attribute__((visibility("default")));
extern std::string crypto_stream_aes256ctr_xor(const std::string &,const std::string &,const std::string &) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_stream_aes256ctr(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_aes256ctr_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_aes256ctr_beforenm(unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_aes256ctr_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern int crypto_stream_aes256ctr_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *) __attribute__((visibility("default")));
extern const char crypto_stream_aes256ctr_implementation[] __attribute__((visibility("default")));
extern const char crypto_stream_aes256ctr_version[] __attribute__((visibility("default")));
extern const char crypto_stream_aes256ctr_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
