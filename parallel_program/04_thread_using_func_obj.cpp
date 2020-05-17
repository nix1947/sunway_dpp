#include <iostream>
#include <thread>

using namespace std;

class FuncObj {
	public:
		void operator()() { // Operator () overloading  in FuncObj class
		for(int i=0; i<100; i++) {
			std::cout<<"Calling from child thread"<<std::<<endl;
		}
	}


};


int main () {
	std::thread obj((FuncObj()));
	for(int i=0; i<1000; i++) {
		std::cout<<"Display from main thread"<<std::endl;
		std::cout<<"Waiting for threads to complete"<<std::endl;
		obj.join();
		std::cout,<<"Exiting from Main thread"<<std::endl;
	}

	return 0;
}
