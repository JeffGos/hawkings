#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <math.h>

#include "point2d.h"

using namespace std;

namespace hawkings {

class Vector2D : public Point2D {
public:

    Vector2D(int x, int y, int magnitude);

    void setMagnitude(int m);
    void setAngle(int ang);

    int getMagnitude() { return this->magnitude; }
    int getAngle() { return this->angle; }

protected:  
    int magnitude;
    double angle; //angle in radians
private:
};

}

#endif 