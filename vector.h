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
	static Vector* sum(Vector* v1, Vector* v2);
	static Vector* mul(Vector* v, long double s);
	static Vector* mul(Vector* v1, Vector* v2);
	static long double innerProduct(Vector* v1, Vector* v2);
	Vector* getUnitVector (void);
};
