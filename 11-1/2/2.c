#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() 
{
    char s[10];
    scanf("%s", s);
    for(int i=0, l=strlen(s); i<l; i++)
    {
        if('a'<=s[i] && s[i]<='z')
            s[i]=toupper(s[i]);
        else
            s[i]=tolower(s[i]);
    }
    printf("%s", s);
}
