#include <iostream>
#include <thread>

using namespace std;

// Function to add
void add(int a, int b)
{
	std::cout << "The addition of two number is\n"
			  << a + b << std::endl;
}

// Function to subtract
void sub(int a, int b)
{
	std::cout << "The subtraction of two number is\n"
			  << a - b << std::endl;
}

// Function to divide
void division(int a, int b)
{
	std::cout << "The division of two number is\n"
			  << (a / b) << std::endl;
}

// Function to multiply
void mul(int a, int b)
{
	std::cout << "The multiplication of two number is\n"
			  << a * b << std::endl;
}

int main()
{
	int a = 6;
	int b = 3;

	// Thread creation
	std::thread t1(add, a, b); // call FORK API of OS  and create t1 subprocess
	std::thread t2(sub, a, b); // call FORK
	std::thread t3(mul, a, b);
	std::thread t4(division, a, b);

	// Wait for the main thread
	t1.join();
	t2.join();
	t3.join();
	t4.join();

	return 0;
}
