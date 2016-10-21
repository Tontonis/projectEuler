/*
 * Vec3Temp.hpp
 *
 *  Created on: 21 Oct 2016
 *      Author: hugo
 */

#ifndef VEC3TEMP_HPP_
#define VEC3TEMP_HPP_

template <class T>
class Vec3Temp {
public:
	T MagX, MagY, MagZ;

	Vec3Temp(T pMagX, T pMagY, T pMagZ) {
		MagX = pMagX;
		MagY = pMagY;
		MagZ = pMagZ;
	}

	T mag();

};

// Scalar multiplication of float * Vec3
template <class T>
Vec3Temp<T> operator*(T lhs, Vec3Temp<T> rhs);

// Addition and subtraction of Vec3 and Vec3
template <class T>
Vec3Temp<T> operator+(Vec3Temp<T> lhs, Vec3Temp<T> rhs);
template <class T>
Vec3Temp<T> operator-(Vec3Temp<T> lhs, Vec3Temp<T> rhs);

// Calculate the square root of a positive floating point number
float sqrt(float a);

#endif /* VEC3TEMP_HPP_ */
