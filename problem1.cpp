// This is a test programme for Project Euler problem 1

#include <iostream>

int main() {
	
	int sum=0; // Store for sum value
		for(int i=0; i<1000; i++) {
			if(i%3==0 || i%5==0) {  // Check right values i
				std::cout << i << std::endl;
				sum+=i; // print and add to sum
			}
		}
	std::cout << sum << std::endl;
	return 0;
}