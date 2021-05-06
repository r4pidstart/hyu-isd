#include<stdio.h>

int main(void)
{
    int i;
    scanf("%d", &i);
    int *pi=&i;
    *pi+=10;
    printf("%d", *pi);
}