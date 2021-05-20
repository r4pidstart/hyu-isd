
#include<stdio.h>

typedef struct
{
    int xpos;
    int ypos;
}_point;

_point get_scale2x_point(const _point *p)
{
    _point ret={p->xpos*2, p->ypos*2};
    return ret;
}

int main(void)
{
    _point p1;
    scanf("%d%d", &p1.xpos, &p1.ypos);
    _point p2=get_scale2x_point(&p1);
    printf("%d %d", p2.xpos, p2.ypos);
}
