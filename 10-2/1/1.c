#include<stdio.h>

int main(void)
{
    int arr[5], min=0x7FFFFFFF, max=-0x7FFFFFFF, sum=0;
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<5; i++)
    {
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
        sum+=arr[i];
    }

    printf("min: %d\nmax: %d\nsum: %d", min, max, sum);
}
