
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>

#define n 4096

double A[n][n];
double B[n][n];
double C[n][n];

float tdiff(struct timeval * start, struct timeval *end){
  return (end->tv_sec-start->tv_sec) + 1e-6*(end->tv_usec-start->tv_usec);
}


int main()
{
  for(int i =0; i < n; ++i){
    for(int j=0; j<n; j++){
      A[i][j] = (double)rand() / (double)RAND_MAX;
      B[i][j] = (double)rand() / (double)RAND_MAX;
      C[i][j] = 0;
    }
  }

  struct timeval start, end;

  gettimeofday(&start, NULL);
  const int chunk = 512;
  for(int ih =0; ih < n; ih += chunk ){
    for(int jh =0; jh < n; jh += chunk ){
      for(int kh =0; kh < n; kh += chunk ){
        for(int il = 0; il < chunk; ++il){
          for(int kl =0; kl < chunk; ++kl){
            for(int jl =0; jl < chunk; ++jl){
              C[ih+il][jh+jl] += A[ih+il][kh+kl] * B[kh+kl][jh+jl]; 
            }   
          }
        }
      }
    }
  }
  gettimeofday(&end, NULL);

  printf("%0.6f\n", tdiff(&start,&end));
  return EXIT_SUCCESS;
}


