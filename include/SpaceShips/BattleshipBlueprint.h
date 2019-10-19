#ifndef BATTLESHIPBLUEPRINT_H
#define BATTLESHIPBLUEPRINT_H
#include "SpaceshipBlueprints.h"

class BattleshipBlueprint: public SpaceshipBlueprints
{
private:
    /* data */
public:
    BattleshipBlueprint(/* args */);
    ~BattleshipBlueprint();
    Spaceships* createSpaceship();
};

#endif