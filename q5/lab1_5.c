#include <stdio.h>
#include <math.h>

int main() {
    double a = 8.3, b = 1, c = -2.6;
    double discriminant = b * b - 4 * a * c;

    printf("Discriminant: %.3lf\n", discriminant);

    if (discriminant >= 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root#1: %.3lf ", root1);
        printf("Root#2: %.3lf", root2);
    } else {
        printf("Complex roots not computed in this example.\n");
    }

    return 0;
}
