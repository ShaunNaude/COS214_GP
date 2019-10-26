#ifndef FRIGATEBLUEPRINT_H
#define FRIGATEBLUEPRINT_H
#include "SpaceshipBlueprints.h"

/**
 * This class is a Concrete factory in the abstract factory design pattern.
 **/

class FrigateBlueprint: public SpaceshipBlueprints
{
private:
    
public:
    ///generic Constructor
    FrigateBlueprint();
    ///generic Destructor
    ~FrigateBlueprint();
    ///implementation of the pure virtual function inherited from the base class
    Spaceships* createSpaceship();
};

#endif