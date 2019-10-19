#ifndef FRIGATEBLUEPRINT_H
#define FRIGATEBLUEPRINT_H
#include "SpaceshipBlueprints.h"

class FrigateBlueprint: public SpaceshipBlueprints
{
private:
    /* data */
public:
    FrigateBlueprint(/* args */);
    ~FrigateBlueprint();
    Spaceships* createSpaceship();
};

#endif