#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int mul(int a, int b)
{
    return a*b;
}

double div(int a, int b)
{
    return (double)a/b;
}

int mod(int a, int b)
{
    return a%b;
}

void print_msg(void)
{
    printf("completed\n");
}

int main(void)
{
    int num1,num2;
    scanf("%d%d", &num1, &num2);
    printf("sum: %d\n", add(num1, num2));
    printf("difference: %d\n", sub(num1, num2));
    printf("product: %d\n", mul(num1, num2));
    printf("division: %f\n", div(num1, num2));
    printf("remainder: %d\n", mod(num1, num2));
    print_msg();
}