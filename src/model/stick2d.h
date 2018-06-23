#ifndef STICK2D_H
#define STICK2D_H

#include "point2d.h"

using namespace std;

namespace hawkings {

class Stick2D {
public:

    Stick2D(Point2D vect1, Point2D vect2, int magnitude);

    void setMagnitude(int m);

    Point2D getX() { return this->point1; }
    Point2D getY() { return this->point2; }
    int getMagnitude() { return this->magnitude; }

protected:  
    Point2D point1;
    Point2D point2;
    int magnitude;
private:
};

}

#endif 