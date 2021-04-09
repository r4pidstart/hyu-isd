#include<stdio.h>

int main(void)
{
    int n,tmp=9;
    scanf("%d", &n);
    while(tmp--)
    {
        printf("%d*%d=%d\n", n, 9-tmp, n*(9-tmp));
    }
    return 0;
}