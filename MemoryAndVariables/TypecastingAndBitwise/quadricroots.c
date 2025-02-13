#include "quadricroots.h"
#include <math.h>

QuadricRootsResult findroots(const long double a, const long double b, const long double c) {
    QuadricRootsResult result;
    double D = b * b - 4 * a * c;
    if (D < 0) {
        result.x1 = 0;
        result.x2 = 0;
        result.norealroots = 1;
    } else {
        result.x1 = (-b + sqrtl(D)) / (2 * a);
        result.x2 = (-b - sqrtl(D)) / (2 * a);
        result.norealroots = 0;
    }
    return result;
}