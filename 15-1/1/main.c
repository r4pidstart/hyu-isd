
#include<stdio.h>
#include"add.h"

int main(void)
{
    int a,b;
    scanf("%d%d", &a,&b);
    
    printf("%d", add(a,b));
}