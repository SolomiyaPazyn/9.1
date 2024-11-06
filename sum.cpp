//////////////////////////////////////////////////////////////////////////////
// sum.cpp
#include <cmath>
#include "sum.h"
#include "dod.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = x; 
    s = a * 2;
    do {
        n++;
        dod(); 
        s += 2 * a;
    } while (fabs(a) > eps);
}