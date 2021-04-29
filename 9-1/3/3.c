#include<stdio.h>

int sum(int n)
{
    static int res=0;
    if(n==0)
        return res;
    res+=n;
    sum(n-1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", sum(n));
}