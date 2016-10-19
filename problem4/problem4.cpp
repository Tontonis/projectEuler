/*
 * problem4.cpp
 *
 *  Created on: 19 Oct 2016
 *      Author: hugo
 *  Problem 4 Project Euler
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <iterator>
#include <vector>

bool isPalinDrome(int testNum);

int main() {
	int highest = 0;
	for(int count1=999; count1>0;--count1) {
		for(int count2=999; count2>0; --count2) {
			if(((count1*count2)>highest)) {
				if(isPalinDrome(count1*count2)==true) {
					highest=count1*count2;
					};
				}
			}
		}
	std::cout << highest << std::endl;
	return 0;
}


bool isPalinDrome(int testNum) {
	std::string num2String = std::to_string(testNum);
	std::string backString = num2String;
	std::reverse(backString.begin(), backString.end());
	if(num2String.compare(backString)==0) return true;
	else return false;
}

