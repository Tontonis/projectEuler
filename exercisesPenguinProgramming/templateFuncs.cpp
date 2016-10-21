#include <iostream>
#include "vector.hpp"

template <class T>
T sum(T values[], unsigned int n)
{
    // Assume n > 0, should check for this
    // We have to initialize, if we don't then s might
    // take a garbage value and this function won't work
    T s = values[0];
    for (unsigned int i = 1; i < n; ++i)
        s = s + values[i];
    return s;
}

// Explicitly instantiate the sum function template with
// an int argument. This is possible with classes too and has
// the same syntax
template int sum<int>(int values[], unsigned int n);

int main()
{
    const unsigned int n = 3;
    int v1[n] = {1, 3, 5};
    double v2[n] = {1.0, 9.0, 3.5};
    Vec3 v3[n] = {
        Vec3( 0, 1, 2),
        Vec3( 2,-1, 3),
        Vec3(-1, 0,-4) };
    // Call the sum function with an int argument
    std::cout << sum<int>(v1, n) << std::endl;
    // Implictly instantiate the sum function template with
    // a double argument and call it
    std::cout << sum<double>(v2, n) << std::endl;
    // Let the compiler deduce that the type is Vec3
    std::cout << sum(v3, n).mag() << std::endl;

    return 0;
}
