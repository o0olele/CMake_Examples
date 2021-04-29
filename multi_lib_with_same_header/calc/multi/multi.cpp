#include "multi.h"
#include "common/common.h"
#include "../../math/math.h"

int multi(int a)
{
    return add_three(a, a, a, a) * Fix_100;
}