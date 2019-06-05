class Vector
{
private:

public:
	double x, y, z;
	Vector(double x, double y, double z);
	Vector(double x, double y);
	Vector(double x);
	Vector(void);
	double get_size(void);
	Vector* sum(Vector* v1, Vector* v2);
	Vector* sub(Vector* v, double s);
	Vector* mul(Vector* v1, Vector* v2);
	double inner_product(Vector* v1, Vector* v2);
};