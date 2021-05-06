#include<stdio.h>

int main(void)
{
    int i;
    double d;
    char c;
    scanf("%d %lf %c", &i, &d, &c);
    printf("i: %d, %p\nd: %lf, %p\nc: %c, %p\n\n", i,&i, d,&d, c,&c);
    int *pi=&i;
    double *pd=&d;
    char *pc=&c;
    *pi+=1;
    *pd+=1;
    *pc+=1;
    printf("i+1: %d\nd+1: %lf\nc+1: %c\n\n", *pi, *pd, *pc);
    printf("size of pi: %ld\n size of pd: %ld\nsize of pc: %ld\n", sizeof(pi), sizeof(pd), sizeof(pc));
}