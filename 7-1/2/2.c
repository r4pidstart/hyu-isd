#include<stdio.h>

int main(void)
{
    int a,b,c, max, min;
    scanf("%d%d%d", &a,&b,&c);
    if(a>b)
        max=a, min=b;
    else
        max=b, min=a;
    
    if(c<min)
        min=c;
    if(c>max)
        max=c;
        
    printf("min: %d\nmax: %d", min,max);
}