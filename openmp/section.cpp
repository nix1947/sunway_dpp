#include<omp.h>
#include<iostream>

int function_1()
{
		std::cout<<"Fuc1 Run by core having Id of "<<omp_get_thread_num()<<std::endl;

	  return 0;

}

int function_2()

{

		std::cout<<"Fuc2 Run by core having Id of "<<omp_get_thread_num()<<std::endl;
		return 0;
}


int main()
{
   // sudo apt-get install gcc  Environment setup is completed and then start to program. 

	  // set the number of threads 
	 // It will create 
    omp_set_num_threads(2);

    #pragma omp parallel sections
    {    
        #pragma omp section
        function_1();
            
        #pragma omp section
				fuction_2();

    }
    return 0;
}
