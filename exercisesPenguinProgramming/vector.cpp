
/* vector.cpp */
#include "vector.hpp"

// Same function as before
float sqrt(float a)
{
    // Try a / 2 as the initial guess
    float x = a / 2.0f;

    // Newton Rhapson will fail if x is close to zero
    // because we divide by x, but sqrt(x) = 0 in that case
    if(-0.00001 < x && x < 0.00001) return 0.0f;

    // Perform 10 iterations of Newton Rhapson
    // x <= (x + a/x) / 2
    for(int i = 0; i < 10; ++i)
    {
        x += a / x;
        x *= 0.5f;
    }

    return x;
}

Vec3 operator*(float lhs, Vec3 rhs)
{
    // Could create a new value and return it,
    // or since we aren't returning a reference we
    // can return the new object directly
    return Vec3(lhs * rhs.x, lhs * rhs.y, lhs * rhs.z);
}

Vec3 operator+(Vec3 lhs, Vec3 rhs)
{
    return Vec3(lhs.x+rhs.x, lhs.y+rhs.y, lhs.z+rhs.z);
}

Vec3 operator-(Vec3 lhs, Vec3 rhs)
{
    return Vec3(lhs.x-rhs.x, lhs.y-rhs.y, lhs.z-rhs.z);
}

float Vec3::mag()
{
    // Only dealing with three components so we can simplify this
    return sqrt(x*x + y*y + z*z);
}
