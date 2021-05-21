
#include<stdio.h>

void get_sum_diff(int a, int b, int *p_sum, int *p_diff)
{
    *p_sum=a+b;
    *p_diff=a-b;
}

int main(void)
{
    int a,b,p_sum,p_diff;
    scanf("%d%d", &a,&b);
    get_sum_diff(a,b,&p_sum,&p_diff);
    printf("sum: %d\ndiff: %d", p_sum, p_diff);
}