#include "math.h"
#include "add/add.h"

float add_three(float a, float b, float c, float d)
{
    vector* A = new vector();
    A->x = a;
    A->y = b;

    vector* B = new vector();
    B->y = d;
    B->x = c;

    vector* tmp = add(A, B);
    A = nullptr;
    B = nullptr;

    return tmp->x;
}