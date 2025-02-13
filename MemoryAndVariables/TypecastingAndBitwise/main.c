#include <stdio.h>
#include "quadricroots.h"
int main() {
    int ia = 3, ib = 4, ic = 1;
    QuadricRootsResult resulti = findroots(ia, ib, ic); // x1 = -1/3, x2 = -1
    float fa = 1.4, fb = 3.5, fc = 2.1;
    QuadricRootsResult resultf = findroots(fa, fb, fc); // x1 = -1, x2 = -1.5
    double da = 5.1, db = 3.2, dc = 1.7;
    QuadricRootsResult resultd = findroots(da, db, dc); // no real roots
    long double la = -1.1, lb = 2.2, lc = 3.3;
    QuadricRootsResult resultl = findroots(la, lb, lc); // x1 = -1, x2 = 3
    printf("int: x1 = %Lf, x2 = %Lf, norealroots = %d\n", resulti.x1, resulti.x2, resulti.norealroots);
    printf("float: x1 = %Lf, x2 = %Lf, norealroots = %d\n", resultf.x1, resultf.x2, resultf.norealroots);
    printf("double: x1 = %Lf, x2 = %Lf, norealroots = %d\n", resultd.x1, resultd.x2, resultd.norealroots);
    printf("long double: x1 = %Lf, x2 = %Lf, norealroots = %d\n", resultl.x1, resultl.x2, resultl.norealroots);
    return 0;
}