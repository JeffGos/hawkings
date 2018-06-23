#ifndef BODY_H
#define BODY_H

#include "point2d.h"

namespace hawkings {

class Body {
public:
    Body(Point2D position);

protected:  
    Point2D position;

private:
};

}

#endif