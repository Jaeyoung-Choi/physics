class Vector
{
private:

public:
	long double x, y, z;
	
	Vector(long double x, long double y, long double z);
	Vector(long double x, long double y);
	Vector(long double x);
	Vector(void);
	long double getSize(void);
	Vector* sum(Vector* v1, Vector* v2);
	Vector* sub(Vector* v, long double s);
	Vector* mul(Vector* v1, Vector* v2);
	long double innerProduct(Vector* v1, Vector* v2);
};
