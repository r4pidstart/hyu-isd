#include<stdio.h>

int gMul=1;

int add_total(int n)
{
    int tmp=0;
    for(int i=1; i<=n; i++)
        tmp+=i;
    return tmp;
}

void mul_total(int n)
{
    for(int i=1; i<=n; i++)
        gMul*=i;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("addTotal(): %d\n", add_total(n));
    mul_total(n);
    printf("gMul: %d", gMul);
}