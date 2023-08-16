In file included from blas.h:17:0,
                 from rainbow.h:7,
                 from rainbow.c:4:
rainbow.c: In function ‘pqcrypto_sign_rainbow6b_impl_priv_rainbow_pubmap_seckey’:
blas_avx2.h:287:10: warning: ‘r[13]’ is used uninitialized in this function [-Wuninitialized]
   r[j] = _mm256_packs_epi16( r[j*2] , r[j*2+1] );
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
blas_avx2.h:287:10: warning: ‘r[7]’ is used uninitialized in this function [-Wuninitialized]
   r[j] = _mm256_packs_epi16( r[j*2] , r[j*2+1] );
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
rainbow.c: In function ‘pqcrypto_sign_rainbow6b_impl_priv_rainbow_secmap’:
blas_avx2.h:287:10: warning: ‘r[7]’ is used uninitialized in this function [-Wuninitialized]
   r[j] = _mm256_packs_epi16( r[j*2] , r[j*2+1] );
          ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
