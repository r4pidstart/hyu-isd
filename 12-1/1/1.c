
#include<stdio.h>

void square(double *target)
{
    *target*=*target;
}

int main(void)
{
    double dvar;
    scanf("%lf", &dvar);
    square(&dvar);
    printf("%lf", dvar);
}