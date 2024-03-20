#include <cmath.h>

double f(double x) {
    return 3 * log(1 + x * exp(-x));
}

double aire(int n) {
    double A = 0;
    double x = 0;

    for (int i = 1; i <= n; i++) {
        A += (1.0 / n) * (f(x) + f(x + 1.0 / n)) / 2;
        x += 1.0 / n;
    }

    return A;
}