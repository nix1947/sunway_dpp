#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define PARENT_TID 0

int main() {
  int tid;

  #pragma omp parallel
  {
    tid = omp_get_thread_num();
    if(tid == PARENT_TID)
      printf("Parent: %d threads running\n", omp_get_num_threads());
    else
      printf("Thread# %d: Hello world\n", tid);
  }
  return EXIT_SUCCESS;
}
