#ifndef __VECTOR_H__
#define __VECTOR_H__

#include <cmath>

class Vector
{
private:

public:
	long double x, y, z;
	
	Vector(const long double x, const long double y, const long double z);
	Vector(const long double x, const long double y);
	Vector(const long double x);
	Vector(void);
	long double getSize(void);

	static Vector sum(const Vector& v1, const Vector& v2);
	static Vector sum(const Vector& v1, const Vector&& v2);
	static Vector sum(const Vector&& v1, const Vector& v2);
	static Vector sum(const Vector&& v1, const Vector&& v2);

	static Vector sub(const Vector& v1, const Vector& v2);
	static Vector sub(const Vector& v1, const Vector&& v2);
	static Vector sub(const Vector&& v1, const Vector& v2);
	static Vector sub(const Vector&& v1, const Vector&& v2);

	static Vector mul(const Vector& v, const long double s);
	static Vector mul(const Vector&& v, const long double s);
	static Vector mul(const long double s, const Vector& v);
	static Vector mul(const long double s, const Vector&& v);

	static long double innerProduct(const Vector& v1, const Vector& v2);
	static long double innerProduct(const Vector& v1, const Vector&& v2);
	static long double innerProduct(const Vector&& v1, const Vector& v2);
	static long double innerProduct(const Vector&& v1, const Vector&& v2);

	Vector getUnitVector(void);
};

Vector operator+(const Vector& v1, const Vector& v2);
Vector operator+(const Vector& v1, const Vector&& v2);
Vector operator+(const Vector&& v1, const Vector& v2);
Vector operator+(const Vector&& v1, const Vector&& v2);

Vector operator-(const Vector& v1, const Vector&& v2);
Vector operator-(const Vector& v1, const Vector& v2);
Vector operator-(const Vector&& v1, const Vector& v2);
Vector operator-(const Vector&& v1, const Vector&& v2);

Vector operator*(const Vector& v, const long double s);
Vector operator*(const Vector&& v, const long double s);
Vector operator*(const long double s, const Vector& v);
Vector operator*(const long double s, const Vector&& v);
long double operator*(const Vector& v1, const Vector& v2);
long double operator*(const Vector& v1, const Vector&& v2);
long double operator*(const Vector&& v1, const Vector& v2);
long double operator*(const Vector&& v1, const Vector&& v2);

#endif