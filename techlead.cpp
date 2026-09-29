#include "techlead.h"
#include <limits>

double centripetalAccel(double v, double r) {
    if (r == 0) return std::numeric_limits<double>::quiet_NaN();
    return (v * v) / r;
}

double centripetalForce(double m, double v, double r) {
    if (r == 0) return std::numeric_limits<double>::quiet_NaN();
    return m * (v * v) / r;
}
