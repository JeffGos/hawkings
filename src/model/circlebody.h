#ifndef CIRCLEBODY_H
#define CIRCLEBODY_H

#include "body.h"

namespace hawkings {

class CircleBody : Body {
public:
    CircleBody(Point2D position, int radius);

protected:  
    int radius;
private:
};

}

#endif