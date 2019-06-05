#include "vector.h"
#include <cmath>

Vector :: Vector(double x, double y, double z)
{
	this.x = x;
	this.y = y;
	this.z = z;
}

Vector :: Vector(double x, double y)
{
	this.x = x;
	this.y = y;
	this.z = 0;
}

Vector :: Vector(double x)
{
	this.x = x;
	this.y = 0;
	this.z = 0;
}

Vector :: Vector(void)
{
	this.x = 0;
	this.y = 0;
	this.z = 0;
}

double Vector::get_size (void)
{
	return sqrt(this -> x * this-> x + this-> y * this-> y + this-> z * this-> z);
}

Vector* Vector::sum (Vector* v1, Vector* v2)
{
	Vector* res = new Vector;
	res -> x = v1 -> x + v2 -> x;
	res -> y = v1 -> y + v2 -> y;
	res -> z = v1 -> z + v2 -> z;
	return res;
}

Vector* Vector::sub (Vector* v, double s)
{
	Vector* res = new Vector;
	res -> x = v -> x * s;
	res -> y = v -> y * s;
	res -> z = v -> z * s;
	return res;
}

Vector* Vector::mul (Vector* v1, Vector* v2)
{
	Vector* res = new Vector;
	res -> x = v1 -> x - v2 -> x;
	res -> y = v1 -> y - v2 -> y;
	res -> z = v1 -> z - v2 -> z;
	return res;
}

double Vector::inner_product (Vector* v1, Vector* v2)
{
    return v1 -> x * v2 -> x + v1 -> y * v2 -> y + v1  -> z * v2 -> z;
}