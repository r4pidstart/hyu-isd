#include<stdio.h>

int main(void)
{
    char c='a';
    while(('0'<=c && c<='9') || ('A'<=c && c<='z') || c=='\n')
    {
        scanf("%c", &c);
        if('0'<=c && c<='9')
            printf("-> %c\n", c);
        else if('A'<=c && c<='Z')
            printf("-> %c\n", c-'A'+'a');
        else if('a'<=c && c<='z')
            printf("-> %c\n", c-'a'+'A');
    }
    printf("exit");
    return 0;
}