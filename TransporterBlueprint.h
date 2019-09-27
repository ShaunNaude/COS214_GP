#ifndef TRANSPORTERBLUEPRINT_H
#define TRANSPORTERBLUEPRINT_H
#include "SpaceshipBlueprints.h"

class TransporterBlueprint: public SpaceshipBlueprints
{
private:
    /* data */
public:
    TransporterBlueprint(/* args */);
    ~TransporterBlueprint();
    Spaceships* createSpaceship();
};

#endif