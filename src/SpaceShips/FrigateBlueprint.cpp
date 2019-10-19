#include "SpaceShips/FrigateBlueprint.h"
FrigateBlueprint::FrigateBlueprint(/* args */)
{
}

FrigateBlueprint::~FrigateBlueprint()
{
}

Spaceships* FrigateBlueprint::createSpaceship(){
    Frigate* frigate = new Frigate();
    return frigate;
}