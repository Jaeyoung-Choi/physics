#include "../include/vector.h"

Vector::Vector(const long double x, const long double y, const long double z)
{
	this -> x = x;
	this -> y = y;
	this -> z = z;
}

Vector::Vector(const long double x, const long double y)
{
	this -> x = x;
	this -> y = y;
	this -> z = 0;
}

Vector::Vector(const long double x)
{
	this -> x = x;
	this -> y = 0;
	this -> z = 0;
}

Vector::Vector(void)
{
	this -> x = 0;
	this -> y = 0;
	this -> z = 0;
}

long double Vector::getSize(void)
{
	return sqrtl(powl(this -> x, 2) + powl(this-> y, 2) + powl(this-> z, 2));
}

Vector Vector::sum(const Vector& v1, const Vector& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vector Vector::sum(const Vector& v1, const Vector&& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vector Vector::sum(const Vector&& v1, const Vector& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vector Vector::sum(const Vector&& v1, const Vector&& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

Vector Vector::sub(const Vector& v1, const Vector& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vector Vector::sub(const Vector& v1, const Vector&& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vector Vector::sub(const Vector&& v1, const Vector& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vector Vector::sub(const Vector&& v1, const Vector&& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

Vector Vector::mul(const Vector& v, const long double s)
{
	return Vector(v.x * s, v.y * s, v.z * s);
}
Vector Vector::mul(const Vector&& v, const long double s)
{
	return Vector(v.x * s, v.y * s, v.z * s);
}
long double Vector::innerProduct(const Vector& v1, const Vector& v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1. z * v2.z;
}

Vector Vector::getUnitVector(void)
{
	long double vSize = this -> getSize();
	return Vector(this -> x / vSize, this -> y / vSize, this -> z / vSize);
}

Vector operator+(const Vector& v1, const Vector& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vector operator+(const Vector& v1, const Vector&& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vector operator+(const Vector&& v1, const Vector& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}
Vector operator+(const Vector&& v1, const Vector&& v2)
{
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

Vector operator-(const Vector& v1, const Vector& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vector operator-(const Vector& v1, const Vector&& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vector operator-(const Vector&& v1, const Vector& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}
Vector operator-(const Vector&& v1, const Vector&& v2)
{
	return Vector(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

Vector operator*(const Vector& v, const long double s)
{
	return Vector(v.x * s, v.y * s, v.z * s);
}
Vector operator*(const Vector&& v, const long double s)
{
	return Vector(v.x * s, v.y * s, v.z * s);
}
long double operator*(const Vector& v1, const Vector& v2)
{
    return v1.x * v2.x + v1.y * v2.y + v1. z * v2.z;
}