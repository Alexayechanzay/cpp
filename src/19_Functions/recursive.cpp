// recurisve function 
// input limit: 0 <= n <= 12
#include <iostream>

unsigned int factorial(unsigned int x){
	return (x<=1) ? 1:x*factorial(x-1);
}

int main(void) {
	unsigned int x=0;
	std::cout<<"Please enter a number for factorial: ";
	std::cin>>x;
	std::cout<<x<<" factorial is "<<factorial(x)<<'\n';
}
