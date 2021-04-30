#include<stdio.h>

long long combination(int n, int r)
{
    if(n==r || r==0)
        return 1;
    if(n-r==1 || r==1)
        return n;
    return combination(n-1,r)+combination(n-1,r-1);
}

int main(void)
{
    int n,r;
    scanf("%d%d", &n,&r);
    printf("%lld", combination(n,r));
}