#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
	// Initialize the MPI environment.
	MPI_Init(NULL, NULL); 

	// Get the number of processes
	int total_processor
	MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

	// Get the name of the processor
	char processor_name[MPI_MAX_PROCESSOR_Name];



return 0;
}
