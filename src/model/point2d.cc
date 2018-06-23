#include "point2d.h"

using namespace hawkings;

Point2D::Point2D(int x, int y)
    : x(x), y(y)
{
}

void Point2D::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}
