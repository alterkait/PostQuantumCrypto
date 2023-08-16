#ifndef crypto_hash_shake256_H
#define crypto_hash_shake256_H

#define crypto_hash_shake256 pqcrypto_hash_shake256_impl
#define crypto_hash_shake256_BYTES pqcrypto_hash_shake256_impl_BYTES
#define crypto_hash_shake256_implementation pqcrypto_hash_shake256_impl_implementation
#define crypto_hash_shake256_version pqcrypto_hash_shake256_impl_version
#define crypto_hash_shake256_compiler pqcrypto_hash_shake256_impl_compiler

#define pqcrypto_hash_shake256_impl_BYTES 136

#ifdef __cplusplus
// C++ wrappers not included in libpqcrypto yet
#include <string>
extern std::string crypto_hash_shake256(const std::string &) __attribute__((visibility("default")));
extern "C" {
#endif

extern int crypto_hash_shake256(unsigned char *,const unsigned char *,unsigned long long) __attribute__((visibility("default")));
extern const char crypto_hash_shake256_implementation[] __attribute__((visibility("default")));
extern const char crypto_hash_shake256_version[] __attribute__((visibility("default")));
extern const char crypto_hash_shake256_compiler[] __attribute__((visibility("default")));

#ifdef __cplusplus
}
#endif

#endif
