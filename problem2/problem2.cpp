/*
 * problem2.cpp
 *
 *  Created on: 18 Oct 2016
 *      Author: hugo
 *      Problem 2 Project Euler
 */

#include <iostream>

int main() {
	int fib1=1, fib2=1;
	int LIMIT = 4000000;
	int sum=0;
	int count=2, temp;
	while (fib1<LIMIT) {
		temp=fib1;
		fib1=fib2;
		fib2=fib1+temp;
		if(fib1%2==0) {
			sum+=fib1;
		}
	}
	std::cout << sum << std::endl;
	return 0;
}


