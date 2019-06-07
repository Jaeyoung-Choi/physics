#include "vector"
#include <cmath>

Vector::Vector(long double x, long double y, long double z)
{
	this -> x = x;
	this -> y = y;
	this -> z = z;
}

Vector::Vector(long double x, long double y)
{
	this -> x = x;
	this -> y = y;
	this -> z = 0;
}

Vector::Vector(long double x)
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

static Vector* Vector::sum(Vector* v1, Vector* v2)
{
	Vector* res = new Vector(res -> x = v1 -> x + v2 -> x, res -> y = v1 -> y + v2 -> y, res -> z = v1 -> z + v2 -> z);
	return res;
}

static Vector* Vector::sub(Vector* v1, Vector* v2)
{
	Vector* res = new Vector(v1 -> x - v2 -> x, v1 -> y - v2 -> y, v1 -> z - v2 -> z);
	return res;
}

static Vector* Vector::sub(Vector* v, long double s)
{
	Vector* res = new Vector(res -> x = v -> x * s, res -> y = v -> y * s, res -> z = v -> z * s);
	return res;
}

static Vector* Vector::mul(Vector* v1, Vector* v2)
{
	Vector* res = new Vector(res -> x = v1 -> x - v2 -> x, res -> y = v1 -> y - v2 -> y, res -> z = v1 -> z - v2 -> z);
	return res;
}

static long double Vector::innerProduct(Vector* v1, Vector* v2)
{
    return v1 -> x * v2 -> x + v1 -> y * v2 -> y + v1  -> z * v2 -> z;
}

Vector* Vector::getUnitVector(void)
{
	long double vSize = this -> getSize();
	Vector* ret = new Vector(this -> x / vSize, this -> y / vSize, this -> z / vSize);
	return ret;
}
