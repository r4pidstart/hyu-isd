
#include<stdio.h>
#include<stdlib.h>

#define max(a,b) ((a)>(b) ? (a):(b))
#define min(a,b) ((a)<(b) ? (a):(b))

int main()
{
    int num;
    scanf("%d", &num);
    int* arr=malloc(sizeof(int)*num);

    for(int i=0; i<num; i++)
        scanf("%d", arr+i);

    int mi=*arr, ma=*arr;
    for(int i=1; i<num; i++)
        mi=min(mi, *(arr+i)), ma=max(ma, *(arr+i));

    printf("min: %d\nmax: %d", mi, ma);
    
    free(arr);
}