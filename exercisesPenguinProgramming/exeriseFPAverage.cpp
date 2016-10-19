/*
 * exeriseFPAverage.cpp
 *
 *  Created on: 19 Oct 2016
 *      Author: hugo
 */


#include <iostream>

int main() {
	float fp1, fp2, fp3;
	std::cout << "Please Enter a float: ";
	std::cin >> fp1;
	std::cout << "Please Enter another float: ";
	std::cin >> fp2;
	std::cout << "Please Enter a final float: ";
	std::cin >> fp3;
	std::cout << "The average is " << (fp1+fp2+fp3)/3.0 << std::endl;
	return 0;
}

