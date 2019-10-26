#ifndef TRANSPORTERBLUEPRINT_H
#define TRANSPORTERBLUEPRINT_H
#include "SpaceshipBlueprints.h"

/**
 * This class is a Concrete factory in the abstract factory design pattern.
 **/

class TransporterBlueprint: public SpaceshipBlueprints
{
private:
    
public:
    ///generic Constructor
    TransporterBlueprint();
    ///generic Destructor
    ~TransporterBlueprint();
    ///implementation of the pure virtual function inherited from the base class
    Spaceships* createSpaceship();
};

#endif