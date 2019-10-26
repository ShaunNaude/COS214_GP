#ifndef EXPLORATION_VESSELBLUEPRINT_H
#define EXPLORATION_VESSELBLUEPRINT_H
#include "SpaceshipBlueprints.h"

/**
 * This class is a Concrete factory in the abstract factory design pattern.
 **/

class Exploration_vesselBlueprint: public SpaceshipBlueprints
{
private:
    
public:
    ///generic Constructor
    Exploration_vesselBlueprint();
    ///generic Destructor
    ~Exploration_vesselBlueprint();
    ///implementation of the pure virtual function inherited from the base class
    Spaceships* createSpaceship();
};

#endif