#include <stdio.h>
#include <math.h>
int main() {
    double numbers[] = {2.00, 4.00, 6.00, 8.00, 10.00};
    int numCount = sizeof(numbers) / sizeof(numbers[0]);double harmonicSum = 0.0;
    for (int i = 0; i < numCount; i++) 
    {
        harmonicSum += 1.0 / numbers[i];}
        double harmonicMean = numCount / harmonicSum;
printf("Harmonic Mean of 2.00 4.00 6.00 8.00 10.00 is %.3lf\n", harmonicMean);
return 0;
}