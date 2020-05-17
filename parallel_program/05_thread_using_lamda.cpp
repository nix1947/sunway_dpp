#include<iostream>
#include<thread>





int main () {
	int x = 100;
	std::thread t(
		[] {
			for(int i=0; i < 1000; i++) 
					std::cout<<"Displaying thread Executing"<<std::endl;

		}
	);


	for(int i=0; i< 100; i++) 
		std::cout<<"Display from main thread"<<std::endl;

	t.join();

	std::cout<<"Exiting from main thread"<<std::endl;

	return 0;
}
