#include "method_newtona.h"

double f(double x, int a1,  int b1,  int c1) {
    return a1*x*x + b1*x + c1;
}

double f1(double x, int a1,  int b1,  int c1) {
    return 2*a1*x + b1;
}

double newton(double xx, double yy, int a1, int b1, int c1) {
    double x1, x2, eps;
    eps = 0.01;
    x1 = yy;
    bool ff = true;
    while (ff) {
        x2 = x1 - (f(x1, a1, b1, c1) / f1(x1, a1, b1, c1));
        if (fabs(x2 - x1) < eps) {
            ff = false;
            return x2;
        }
        else {
            x1 = x2;
        }
    }
}
