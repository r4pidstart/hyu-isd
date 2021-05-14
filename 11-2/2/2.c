#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() 
{
    char s[10];
    scanf("%s", s);
    int p1=0, p2=strlen(s)-1; // s[strlen(s)]=\0
    for(int i=0; i<=p2; i++)
        s[i]=toupper(s[i]);
    while(p1<p2)
    {
        if(s[p1++]!=s[p2--])
        {
            printf("This is not a palindrome");
            return 0;
        }
    }
    printf("This is a palindrome");
}
