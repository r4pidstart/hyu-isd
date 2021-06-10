#include"point.h"

Point getScale2xPoint(const Point* point)
{
    Point ret={point->xpos*2, point->ypos*2};
    return ret;
}