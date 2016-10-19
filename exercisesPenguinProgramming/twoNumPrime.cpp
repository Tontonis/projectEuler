/*
 * twoNumPrime.cpp
 *
 *  Created on: 19 Oct 2016
 *      Author: hugo
 */

#include <iostream>

int main() {
	int en1, en2, tar;
	std::cout << "please enter two integers less than ten: ";
	std::cin >> en1 >> en2;
	if(en1 > 10 || en2 > 10) {
		std::cout << "One number is greater than 10" << std::endl;
		return 0;
	}
	if(en1>en2) tar=en1;
	else tar=en2;
	if(tar==2 || tar==3 || tar==5 || tar==7) std::cout << "highest value " << tar << " is prime." << std::endl;
	else std::cout << "highest value isn't prime" << std::endl;

	return 0;
}


