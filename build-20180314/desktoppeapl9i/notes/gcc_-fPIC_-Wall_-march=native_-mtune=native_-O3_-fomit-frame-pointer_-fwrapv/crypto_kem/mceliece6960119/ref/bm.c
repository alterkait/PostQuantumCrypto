bm.c: In function ‘pqcrypto_kem_mceliece6960119_impl_priv_bm’:
bm.c:62:3: warning: this ‘for’ clause does not guard... [-Wmisleading-indentation]
   for (i = SYS_T; i >= 1; i--) B[i] = B[i-1]; B[0] = 0;
   ^~~
bm.c:62:47: note: ...this statement, but the latter is misleadingly indented as if it were guarded by the ‘for’
   for (i = SYS_T; i >= 1; i--) B[i] = B[i-1]; B[0] = 0;
                                               ^
