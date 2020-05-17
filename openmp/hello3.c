#include <stdio.h>
#include <omp.h>

int main () {
	
	int thread_id; 

	#pragma omp parallel private(thread_id)
	{
		thread_id = omp_get_thread_num();
		
		printf("hello world from thread %d\n", thread_id);



	}

return 0;


}
