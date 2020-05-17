#include <iostream>
#include <thread>
using namespace std; 


void add(double num1, double num2) {
	std::cout<<"The sum is\n"<<num1+num2<<std::endl;
}

void sub(double num1, double num2) {
	std::cout<<"The subtraction is\n"<<num1-num2<<std::endl;
}

void division(double num1, double num2) {
	std::cout<<"The division is\n"<<num1/num2<<std::endl;
}

void mul(double num1, double num2) {
	std::cout<<"The multiplication is\n"<<num1*num2<<std::endl;
}


int main () {
	int a = 9;
	int b = 3;
	std::thread t1(add, a, b);
	std::thread t2(sub, a, b);
	std::thread t3(mul, a, b);
	std::thread t4(division, a, b);
		
  // Wait for main thread
	t1.join();
	t2.join();
	t3.join();
	t4.join();

	return 0;
}

