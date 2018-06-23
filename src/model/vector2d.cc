#include "vector2d.h"

using namespace hawkings;

Vector2D::Vector2D(int x, int y, int magnitude)
    : magnitude(magnitude), Point2D(x, y)
{
    if (x > 0 && y > 0) {
        this->angle = atan2(y, x);
    }
}

void Vector2D::setMagnitude(int m)
{
    this->magnitude = m;
}

void Vector2D::setAngle(int ang)
{
    this->angle = ang;
    this->x = magnitude * cos(ang);
    this->y = magnitude * sin(ang);
}
