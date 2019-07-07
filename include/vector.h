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

	static long double innerProduct(const Vector& v1, const Vector& v2);
	Vector getUnitVector(void);
};

#endif