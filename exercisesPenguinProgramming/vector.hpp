/* vector.hpp */
#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vec3
{
    public:

    float x, y, z;

    Vec3(float aX, float aY, float aZ)
    {
        x = aX;
        y = aY;
        z = aZ;
    }

    float mag();
};

// Scalar multiplication of float * Vec3
Vec3 operator*(float lhs, Vec3 rhs);

// Addition and subtraction of Vec3 and Vec3
Vec3 operator+(Vec3 lhs, Vec3 rhs);
Vec3 operator-(Vec3 lhs, Vec3 rhs);

// Calculate the square root of a positive floating point number
float sqrt(float a);

#endif
