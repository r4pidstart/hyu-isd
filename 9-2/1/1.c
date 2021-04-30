#include<stdio.h>

int print_line(int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", i+1);
    printf("\n");
}

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        print_line(i+1);
    for(int i=n; i>0; i--)
        print_line(i);
}