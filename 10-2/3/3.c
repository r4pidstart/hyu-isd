#include<stdio.h>

int main(void)
{
    double arr[5];
    for(int i=0; i<5; i++)
        scanf("%lf", &arr[i]);
    double *p=arr, sum=0;
    for(int i=0; i<5; i++)
    {
        *(p+i)*=2;
        sum+=*(p+i);
        printf("%lf\n", *(p+i));
    }
    printf("sum: %lf", sum);
}
