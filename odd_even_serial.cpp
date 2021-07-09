#include <iostream>

using namespace std;



long evenSum(long num) {
	int evens = 0;
 for(int i=1; i<=num; i++) {
    if(i%2 == 0)
  		evens += i; 
	}
	return evens;
}

long oddSum(long num) {
	int odds = 0;
 for(int i=1; i<=num; i++) {
    if(i%2 != 0)
  		odds += i; 
	}
return odds;
}


int main() {
	long num = 2500000;
  std::cout<<"The even sum is "<<evenSum(num)<<endl; 
	std::cout<<"The odd sum is"<<oddSum(num)<<endl;
	return 0; 
}
