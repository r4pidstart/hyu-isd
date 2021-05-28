
#include<stdio.h>

void printArray(const char **arr, int len)
{
    printf("Array ");
    for(int i=0; i<len; i++)
        printf("[%d]: %s, ", i, arr[i]);
    printf("\n");
}

void swap(char **a, char **b)
{
    char *tmp=*a;
    *a=*b;
    *b=tmp;
}

int main(void)
{
    const char *arr_s[2]={"aaa", "bbb"};
    printArray(arr_s, 2);
    swap(&arr_s[0], &arr_s[1]);
    printArray(arr_s, 2);
}