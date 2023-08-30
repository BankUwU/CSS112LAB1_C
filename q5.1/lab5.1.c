#include <stdio.h>
#include <math.h>

int main() {
    double a = 8.3, b = 1, c = -2.6, d = b * b - 4 * a * c;
    if (d >= 0) printf("Discriminant: %.3lf, Roots: %.3lf, %.3lf\n", d, (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    else printf("Complex roots not computed in this example.\n");
    return 0;
}




