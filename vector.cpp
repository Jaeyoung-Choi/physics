#include "vector"
#include <cmath>

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
	return sqrtl(this -> x * this-> x + this-> y * this-> y + this-> z * this-> z);
}

Vector Vector::sum(const Vector* const v1, const Vector* const v2)
{
	Vector res = Vector(res -> x = v1 -> x + v2 -> x, res -> y = v1 -> y + v2 -> y, res -> z = v1 -> z + v2 -> z);
	return res;
}

Vector Vector::sub(const Vector* const v1, const Vector* const v2)
{
	Vector res = new Vector(v1 -> x - v2 -> x, v1 -> y - v2 -> y, v1 -> z - v2 -> z);
	return res;
}

Vector Vector::sub(const Vector* const v, const long double s)
{
	Vector res = new Vector(res -> x = v -> x * s, res -> y = v -> y * s, res -> z = v -> z * s);
	return res;
}

Vector Vector::mul(const Vector* const v1, const Vector* const v2)
{
	Vector res = new Vector(res -> x = v1 -> x - v2 -> x, res -> y = v1 -> y - v2 -> y, res -> z = v1 -> z - v2 -> z);
	return res;
}

long double Vector::innerProduct(const Vector* const v1, const Vector* const v2)
{
    return v1 -> x * v2 -> x + v1 -> y * v2 -> y + v1  -> z * v2 -> z;
}

Vector Vector::getUnitVector(void)
{
	long double vSize = this -> getSize();
	Vector ret = new Vector(this -> x / vSize, this -> y / vSize, this -> z / vSize);
	return ret;
}
