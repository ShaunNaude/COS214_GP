#ifndef FIGHTERBLUEPRINT_H
#define FIGHTERBLUEPRINT_H
#include "SpaceshipBlueprints.h"

/**
 * This class is a Concrete factory in the abstract factory design pattern.
 **/

class FighterBlueprint: public SpaceshipBlueprints
{
private:
    
public:
    ///generic Constructor
    FighterBlueprint();
    ///generic Destructor
    ~FighterBlueprint();
    ///implementation of the pure virtual function inherited from the base class
    Spaceships* createSpaceship();
};

#endif