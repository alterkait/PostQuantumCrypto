cpucycles.c: In function ‘pqcpucycles_impl_persecond’:
cpucycles.c:16:3: warning: implicit declaration of function ‘sysctlbyname’; did you mean ‘sysctl’? [-Wimplicit-function-declaration]
   sysctlbyname("machdep.tsc_freq",&result,&resultlen,0,0);
   ^~~~~~~~~~~~
   sysctl
