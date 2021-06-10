#include<stdio.h>
#include"point.h"
#include"pointmath.h"

int main(void)
{
    int a,b;
    scanf("%d%d", &a,&b);

    Point point = {a,b};
    Point point2x=getScale2xPoint(&point);
    printf("%d %d", point2x.xpos, point2x.ypos);
}