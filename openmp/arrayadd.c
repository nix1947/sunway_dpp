
# include <stdio.h>
#include "omp.h"
void main()
{
int i, k=2, N=10000;
int R[N], A[N], B[N];
int pouplateindex=0;


populate_array(int size, int arr[]) {

// Populate random value prallely

#pragma omp parallel for
for(populateindex=0; populateindex <size; populateindex++) 
{
   arr[poulateindex] = randomfunc(); 
}


}

#pragma omp parallel for
for (i=0; i<=N; i++) {
   R[i] = A[i] +  B[i];
}

// Write a for loop to print the value of Result array 

for(i=0; i<=N; i++) {

	printf("Element of sum array is %d", R[i]);
}

}
