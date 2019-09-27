#ifndef EXPLORATION_VESSELBLUEPRINT_H
#define EXPLORATION_VESSELBLUEPRINT_H
#include "SpaceshipBlueprints.h"

class Exploration_vesselBlueprint: public SpaceshipBlueprints
{
private:
    /* data */
public:
    Exploration_vesselBlueprint(/* args */);
    ~Exploration_vesselBlueprint();
    Spaceships* createSpaceship();
};

#endif