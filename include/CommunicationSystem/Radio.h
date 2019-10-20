#ifndef Radio_H
#define Radio_H
#include "SpaceShips/Spaceships.h"
#include <vector>



//this is a mediator
class Radio  
{
private:
    vector<Spaceships*> ships;
public:
    Radio(/* args */);
    void registerShip(Spaceships*);
    void announcement();
    ~Radio();
};

#endif