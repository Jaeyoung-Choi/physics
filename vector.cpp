#include "vector.h"
#include <stdlib.h>
#include <math.h>

typedef struct Vector
{
    double x;
    double y;
    double z;
} vector;

double vector_get_size (vector* v)
{
    return sqrt(v -> x * v -> x + v -> y * v -> y + v -> z *v -> z);
}

vector* vector_sum (vector* v1, vector* v2)
{
    vector* res = (vector*)malloc(sizeof(vector));
    res -> x = v1 -> x + v2 -> x;
    res -> y = v1 -> y + v2 -> y;
    res -> z = v1 -> z + v2 -> z;
    return res;
}

vector* vector_sub (vector* v, double s)
{
    vector* res = (vector*)malloc(sizeof(vector));
    res -> x = v -> x * s;
    res -> y = v -> y * s;
    res -> z = v -> z * s;
    return res;
}

vector* vector_mul (vector* v1, vector* v2)
{
    vector* res = (vector*)malloc(sizeof(vector));
    res -> x = v1 -> x - v2 -> x;
    res -> y = v1 -> y - v2 -> y;
    res -> z = v1 -> z - v2 -> z;
    return res;
}

double vector_inner_product (vector* v1, vector* v2)
{
    return v1 -> x * v2 -> x + v1 -> y * v2 -> y + v1  -> z * v2 -> z;
}

vector* vector_new_vector (double x, double y, double z)
{
    vector* 