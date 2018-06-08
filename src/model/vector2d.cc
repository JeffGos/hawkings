#include "vector2d.h"

using namespace hawkings;

Vector2D::Vector2D(int x, int y, int magnitude)
    : x(x), y(y), magnitude(magnitude)
{
    if (x > 0 && y > 0) {
        this->angle = atan2(y, x);
    }
}

Vector2D::Vector2D(int x, int y)
{
    Vector2D(x, y, 0);
}

void Vector2D::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
    this->angle = atan2(y, x);
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
