
# include <omp.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int main ( )
{
  double t1;
  double t2;

  printf ( "\n" );
  printf ( "FUNCTIONS_OPENMP\n" );
  printf ( "  Demonstrate a few of OpenMP's library functions.\n" );
/*
  Output #1.
*/
  printf ( "\n" );
  printf ( "  While NOT in a parallel region:\n" );
  printf ( "\n" );
  printf ( "  omp_get_max_threads ( ) = %d\n", omp_get_max_threads ( ) );
  printf ( "  omp_get_num_threads ( ) = %d\n", omp_get_num_threads ( ) );
  printf ( "  omp_get_thread_num ( ) =  %d\n", omp_get_thread_num ( ) );
  printf ( "  omp_get_num_procs ( )   = %d\n", omp_get_num_procs ( ) );
  printf ( "  omp_get_wtime ( ) =       %g\n", omp_get_wtime ( ) );
/*
  Output #2:
*/
  omp_set_num_threads ( 5 );

  printf ( "\n" );
  printf ( "  While NOT in a parallel region,\n" );
  printf ( "  after calling omp_set_num_threads ( 5 ):\n" );
  printf ( "\n" );
  printf ( "  omp_get_max_threads ( ) = %d\n", omp_get_max_threads ( ) );
  printf ( "  omp_get_num_threads ( ) = %d\n", omp_get_num_threads ( ) );
  printf ( "  omp_get_thread_num ( ) =  %d\n", omp_get_thread_num ( ) );
  printf ( "  omp_get_num_procs ( )   = %d\n", omp_get_num_procs ( ) );
  printf ( "  omp_get_wtime ( ) =       %g\n", omp_get_wtime ( ) );
/*
  Output #3:
*/
  omp_set_num_threads ( 3 );

# pragma omp parallel
{
  printf ( "\n" );
  printf ( "  Enter a parallel region.\n" );
  printf ( "  after calling omp_set_num_threads ( 3 ):\n" );
  printf ( "\n" );
  printf ( "  omp_get_thread_num ( ) =  %d\n", omp_get_thread_num ( ) );

# pragma omp single
  {
    printf ( "\n" );
    printf ( "  While in a parallel region,\n" );
    printf ( "  printing from a single thread:\n" );
    printf ( "\n" );
    printf ( "  omp_get_max_threads ( ) = %d\n", omp_get_max_threads ( ) );
    printf ( "  omp_get_num_threads ( ) = %d\n", omp_get_num_threads ( ) );
    printf ( "  omp_get_thread_num ( ) =  %d\n", omp_get_thread_num ( ) );
    printf ( "  omp_get_num_procs ( )   = %d\n", omp_get_num_procs ( ) );
    printf ( "  omp_get_wtime ( ) =       %g\n", omp_get_wtime ( ) );
  }
}
/*
  Output #4:
*/
  t1 = omp_get_wtime ( );
  sleep ( 5 );
  t2 = omp_get_wtime ( );
  printf ( "\n");
  printf ( "  omp_get_wtime estimates duration of sleep(5) as %g seconds.\n", t2 - t1 );
/*
  Terminate.
*/
  printf ( "\n" );
  printf ( "FUNCTIONS_OPENMP\n" );
  printf ( "  Normal end of execution.\n" );

  return 0;
}
