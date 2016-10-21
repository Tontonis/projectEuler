/*
 * Vec3Temp.cpp
 *
 *  Created on: 21 Oct 2016
 *      Author: hugo
 */

#include "Vec3Temp.hpp"

// We assume that T is a simple numeric type,
// if it isn't then we would have to write a specialisation
// as this code wouldn't work with it.
template <class T>
T sqrt(T a)
{
    T x = a / 2.0;

    if(-0.00001 < x && x < 0.00001) return 0.0;


    for(int i = 0; i < 10; ++i)
    {
        x += a / x;
        x *= 0.5;
    }

    return x;
}

template <class T>
Vec3Temp<T> operator*(T lhs, Vec3Temp<T> rhs) {
	return Vec3Temp<T>(lhs*rhs.MagX,lhs*rhs.MagY,lhs*rhs.MagZ);
}

template <class T>
Vec3Temp<T> operator+(Vec3Temp<T> lhs, Vec3Temp<T> rhs) {
	return Vec3Temp<T>(lhs.MagX+rhs.MagX,lhs.MagY+rhs.MagY,lhs.MagX+rhs.MagZ);
}

template <class T>
Vec3Temp<T> operator-(Vec3Temp<T> lhs, Vec3Temp<T> rhs) {
	return Vec3Temp<T>(lhs.MagX-rhs.MagX,lhs.MagY-rhs.MagY,lhs.MagX-rhs.MagZ);
}

template <class T>
T Vec3Temp<T>::mag() {
	return sqrt(MagX*MagX+MagY*MagY+MagZ*MagZ);
}

template <>
int Vec3Temp<int>::mag() {
	int X=MagX, Y=MagY, Z=MagZ;
	if(X<0) X=-X;
	if(Y<0) Y=-Y;
	if(Z<0) Z=-Z;
	return X+Y+Z;
}

template class Vec3Temp<int>;
template class Vec3Temp<double>;
