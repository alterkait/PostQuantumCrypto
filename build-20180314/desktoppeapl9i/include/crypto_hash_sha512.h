#ifndef crypto_hash_sha512_H
#define crypto_hash_sha512_H

#define crypto_hash_sha512 pqcrypto_hash_sha512_impl
#define crypto_hash_sha512_BYTES pqcrypto_hash_sha512_impl_BYTES
#define crypto_hash_sha512_implementation pqcrypto_hash_sha512_impl_implementation
#define crypto_hash_sha512_version pqcrypto_hash_sha512_impl_version
#define crypto_hash_sha512_compiler pqcrypto_hash_sha512_impl_compiler

#define pqcrypto_hash_sha512_impl_BYTES 64

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_hash_sha512(const std::string &) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_hash_sha512(unsigned char *,const unsigned char *,unsigned long long) __attribute__((visibility("default")));
extern const char crypto_hash_sha512_implementation[] __attribute__((visibility("default")));
extern const char crypto_hash_sha512_version[] __attribute__((visibility("default")));
extern const char crypto_hash_sha512_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
