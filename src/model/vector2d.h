#ifndef BODY_H
#define BODY_H

#include <math.h>

using namespace std;

namespace hawkings {

class Vector2D {
public:

    Vector2D(int x, int y, int magnitude);
    Vector2D(int x, int y);

    void setPosition(int x, int y);
    void setMagnitude(int m);
    void setAngle(int ang);

    int getX() { return this->x; }
    int getY() { return this->y; }
    int getMagnitude() { return this->magnitude; }
    int getAngle() { return this->angle; }

protected:  
    int x;
    int y;
    int magnitude;
    double angle; //angle in radians
private:
};

}

#endif