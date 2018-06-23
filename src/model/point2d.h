#ifndef PIONT2D_H
#define PIONT2D_H

#include <math.h>

using namespace std;

namespace hawkings {

class Point2D {
public:

    Point2D(int x, int y);

    void setPosition(int x, int y);

    int getX() { return this->x; }
    int getY() { return this->y; }

protected:  
    int x;
    int y;
private:
};

}

#endif 