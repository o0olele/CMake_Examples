#include "add/add.h"

vector* add(vector* a, vector* b)
{
    vector* ret = new vector();
    ret->x = a->x + b->x;
    ret->y = a->y + b->y;

    return ret;
}

