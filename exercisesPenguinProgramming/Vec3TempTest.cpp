/*
 * Vec3TempTest.cpp
 *
 *  Created on: 21 Oct 2016
 *      Author: hugo
 */



#include <iostream>
#include "Vec3Temp.hpp"

int main()
{
    Vec3Temp<double> foo(2.0, 1.0, 2.0);
    Vec3Temp<int> bar(1, 2, -3);

    // This should be 3
    std::cout << foo.mag() << std::endl;
    // This should be 6
    std::cout << bar.mag() << std::endl;

    return 0;
}
