
#include<stdio.h>

void printAllString(const char **str)
{
    printf("%s\n%s\n%s", *str, *(str+1), *(str+2));
}

void printString(const char *str)
{
    printf("%s\n", str);
}

int main(void)
{
    const char *s[3]={"One", "Two", "Three"};

    printString(*s);
    printString(*(s+1));
    printString(*(s+2));
}