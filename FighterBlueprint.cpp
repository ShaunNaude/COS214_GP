#include "FighterBlueprint.h"
FighterBlueprint::FighterBlueprint(/* args */)
{
}

FighterBlueprint::~FighterBlueprint()
{
}

Spaceships* FighterBlueprint::createSpaceship(){
    Fighter* fighter = new Fighter();
    return fighter;
}