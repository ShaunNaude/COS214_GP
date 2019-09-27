#ifndef FIGHTERBLUEPRINT_H
#define FIGHTERBLUEPRINT_H
#include "SpaceshipBlueprints.h"

class FighterBlueprint: public SpaceshipBlueprints
{
private:
    /* data */
public:
    FighterBlueprint(/* args */);
    ~FighterBlueprint();
    Spaceships* createSpaceship();
};

#endif