#include<omp.h>
#include<iostream>

int function_1()
{
		std::cout<<"Fuc1 Run by core having Id of "<<omp_get_thread_num()<<std::endl;

	  return 0;

    for (int i = 0; i != 3; i++)
    {
        std::cout << "Function 1 (i = " << i << ")" << std::endl;
    }
}

int function_2()

{

		std::cout<<"Fuc2 Run by core having Id of "<<omp_get_thread_num()<<std::endl;
		return 0;

    for (int j = 0; j != 4; j++)
    {
        std::cout << " Function 2 "<< "(j = " << j << ")" << std::endl;
    }
}


int main()
{
    #pragma omp parallel sections
    {    
        #pragma omp section
        function_1();
            
        #pragma omp section
        function_2();
    }

    return 0;
}
