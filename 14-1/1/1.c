
#include<stdio.h>
#include<stdlib.h>

typedef struct Point
{
    int xpos,ypos;
}Point;

int main()
{
    Point* val=malloc(sizeof(Point));
    scanf("%d%d", &val->xpos, &val->ypos);
    printf("%d %d", val->xpos, val->ypos);

    free(val);
}