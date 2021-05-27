
#include<stdio.h>

#define PI 3.141592

int main(void)
{
    double r;
    scanf("%lf", &r);
    printf("Perimeter: %lf\nArea: %lf", 2*PI*r, PI*r*r);
}