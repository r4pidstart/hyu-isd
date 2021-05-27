
#include<stdio.h>

void printString(const char **str)
{
    printf("%s\n%s\n%s", *str, *(str+1), *(str+2));
}

int main(void)
{
    const char *s[3]={"One", "Two", "Three"};

    printString(s);
}