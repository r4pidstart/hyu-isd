#include<stdio.h>

int main(void)
{
    char *str;
    scanf("%s", str);
    int i=0;
    while(str[i]!='\0')
        i++;
    printf("%d", i);
}
