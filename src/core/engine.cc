#include "engine.h"

using namespace hawkings;

Engine::Engine(float gravity) 
: gravity(gravity) {

}

Engine::~Engine(){

}

void Engine::update(unsigned long timeMs) {
    this->timeMs = timeMs;

    
}