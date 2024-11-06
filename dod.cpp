//////////////////////////////////////////////////////////////////////////////
// dod.cpp
#include "dod.h"
#include "var.h"
#include <math.h>
using namespace nsVar;

void nsDod::dod() {
    // Calculate the next term using the recurrence relation
    // R = (2n-1)x^2/(2n+1)
    a *= (2 * n - 1) * pow(x, 2) / (2 * n + 1);
}
