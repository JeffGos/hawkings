#include "stick2d.h"

using namespace hawkings;

Stick2D::Stick2D(Point2D point1, Point2D point2, int magnitude)
    : point1(point1), point2(point2), magnitude(magnitude)
{
}

void Stick2D::setMagnitude(int m)
{
    this->magnitude = m;
}
