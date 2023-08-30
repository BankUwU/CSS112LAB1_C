#include <stdio.h>
#include <math.h>
int main() {
    float a = 8.3,b=1,c=-2.6,d,r1,r2;
    d = pow(b,2)-(4 * a * c);
    if (d>0){
        printf("For a = %.1f b = %.1f c = %.1f\n",a,b,c);
        printf("Discriminant = %.3f\n",d);
        r1=(-b + sqrt(d)) / (2 * a);
        r2=(-b - sqrt(d)) / (2 * a);
        printf("Root#1 = %.3f and Root#2 = %.3f",r1,r2);
    }
    else{
        printf("ERROR");
    }
    return 0;
}