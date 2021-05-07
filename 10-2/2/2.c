#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *arr=malloc(sizeof(int)*5),
        *tmparr=malloc(sizeof(int)*5);
    int *p=arr;
    
    for(int i=0; i<5; i++)
        scanf("%d", p++);

    for(int i=0; i<5; i++)
        *(tmparr+(i))=*(arr+(4-i));

    arr=tmparr, p=tmparr;

    for(int i=0; i<5; i++)
        printf("%d ", *p++);
}
