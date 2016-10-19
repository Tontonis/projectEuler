// A Programme to check whether any inputted number is prime

bool isPrime(long long int testNum);

#include <iostream>
#include <cmath>

int main() {
	long long int en1;
	std::cout << "please enter an integer to test if prime: ";
	std::cin >> en1;
	if(isPrime(en1)==true) {
		std::cout << en1 << " is prime" << std::endl;
	}
	else std::cout << en1 << " isn't prime" << std::endl;

	return 0;
}

bool isPrime(long long int testNum) {
	// Takes number integer and returns true is number is prime, false is not
	long long int testNo = 0;
	for(testNo=2; testNo < std::sqrt(testNum); ++testNo) {
		if(testNum%testNo == 0) return false;
	}
	return true;
}
