#include <stdio.h>
#include <math.h>
int main() {
    double numbers[] = {2.25,4.16,6.17,7.18,6.19}, product = 1.0;
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) product *= numbers[i];
    printf("Geometric Mean of 2.25 4.16 6.17 7.18 and 6.19 is %4f\n", pow(product, 1.0 / (sizeof(numbers)/sizeof(numbers[0]))));
    return 0;
}