#include<stdio.h>

int main(void)
{
    char tmp;
    int count=0;
    while(scanf("%c", &tmp), tmp!='\n' && tmp!=' ')
        count++;
    printf("%d", count);
}
