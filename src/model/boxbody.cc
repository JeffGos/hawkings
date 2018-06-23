#include "boxbody.h"

using namespace hawkings;

BoxBody::BoxBody(Point2D position, int width, int height)
    : Body(position), width(width), height(height)
{

}