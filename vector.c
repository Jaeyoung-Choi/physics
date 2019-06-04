#include "vector.h"
#include <stdlib.h>
#include <math.h>

typedef struct Vector
{
    double x;
    double y;
    double z;
} vector;

double size (vector* v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z *v.z);
}

vector* sum (vector* v1, vector* v2)
{
    vector* res = (vector*)malloc(sizeof(vector));
    res -> x = v1.x + v2.x;
    res -> y = v1.y + v2.y;
    res -> z = v1.z + v2.z;
    return res;
}

double inner_product (vector v1, vector v2)