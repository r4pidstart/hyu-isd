#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n<-10)
        printf("n < -10");
    else if(-10<=n && n<0)
        printf("-10 <= n < 0");
    else if(0<=n && n<10)
        printf("0 <= n < 10");
    else
        printf("n >= 10");
}