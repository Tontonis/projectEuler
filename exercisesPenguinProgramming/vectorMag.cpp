/*
 * vectorMag.cpp
 *
 *  Created on: 19 Oct 2016
 *      Author: hugo
 */

#include <iostream>

double sqrt(double a);

double mag(double vector[], unsigned int lenVec);

double mag(double num);

int main() {
	double vecNum[2]= {593.0f, 28.482f};
	double test = 3743.2f;
	std::cout << mag(vecNum, 2) << std::endl;
	std::cout << mag(test) << std::endl;

	return 0;
}

double sqrt(double a)
{
    // Try a / 2 as the initial guess
    float x = a / 2.0f;

    // Newton Rhapson will fail if x is close to zero
    // because we divide by x, but sqrt(x) = 0 in that case
    if(-0.00001 < x && x < 0.00001) return 0.0f;

    // Perform 10 iterations of Newton Rhapson
    // x <= (x + a/x) / 2
    for(int i = 0; i < 20; ++i)
    {
        x += a / x;
        x *= 0.5f;
    }

    return x;
}

double mag(double vector[], unsigned lenVec) {
	double magVec = 0.0;
	for(int i=0; i<lenVec; ++i) {
		magVec+=vector[i]*vector[i];
		std::cout << magVec << std::endl;
	}
	return sqrt(magVec);
}


double mag(double num) {
	return sqrt(num);
}


