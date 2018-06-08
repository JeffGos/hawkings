#ifndef ENGINE_H
#define ENGINE_H

#include "../model/model.h"

namespace hawkings {

class Engine
{
public: 
    Engine(float gravity);
    ~Engine();

    void update(unsigned long timeMs);

protected: 
    float gravity;
    unsigned long timeMs;

private:
    
};

}

#endif
