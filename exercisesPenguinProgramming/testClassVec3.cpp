/*
 * testClassVec3.cpp
 *
 *  Created on: 21 Oct 2016
 *      Author: hugo
 */




#include <iostream>
#include "vector.hpp"

int main()
{
    Vec3 a(-1.0f, 2.0f, 3.0f);
    Vec3 b(2.0f, 0.0f, -1.0f);

    std::cout << "|a| = " << a.mag() << std::endl;
    std::cout << "|b| = " << b.mag() << std::endl;

    Vec3 c = 3.0f * (a + b);

    std::cout << "|c| = " << c.mag() << std::endl;

    return 0;
}
