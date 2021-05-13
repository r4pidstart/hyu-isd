#include<stdio.h>
#include<string.h>

int main() 
{
    char s1[10], s2[10];
    scanf("%s %s", s1, s2);
    printf("str1: %s\nstr2: %s\n", s1, s2);
    printf("length of str1: %ld\nlength of str2: %ld\n", strlen(s1), strlen(s2));
    printf("str1+str2: %s%s\n", s1,s2);
    printf("%s\n", strcmp(s1,s2) ? "not same":"same");
}