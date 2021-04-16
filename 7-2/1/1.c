#include<stdio.h>

int main(void)
{
    double a=1.23456789, b=0.0000123456789;
    printf("%.10f %.10f\n%e %e\n%E %E\n%g %g\n%G %G", a,b, a,b, a,b, a,b, a,b);
    return 0;
}
