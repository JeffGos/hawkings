#ifndef BOXBODY_H
#define BOXBODY_H

#include "body.h"

namespace hawkings {

class BoxBody : Body {
public:
    BoxBody(Point2D position, int x, int y);

protected:  
    int width;
    int height;
private:
};

}

#endif