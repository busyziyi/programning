#include <stdio.h>
#include <math.h>
double sqrt(double x) {
    if (x == 0) {
        return 0;
    }

    double a = x;
    double p = 1e-7;

    do {
        double b = 0.5 * (a + x / a);
        if (fabs(b - a) < p) {
            return b;
        }
        a = b;
    } while (1);
}
int main() {
    double x ;
    scanf("%lf",&x);
    double y = sqrt(x);

    printf("%.7f\n",y);

    return 0;
}

