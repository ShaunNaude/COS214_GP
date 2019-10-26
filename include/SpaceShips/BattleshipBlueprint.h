#ifndef BATTLESHIPBLUEPRINT_H
#define BATTLESHIPBLUEPRINT_H
#include "SpaceshipBlueprints.h"

/**
 * This class is a Concrete factory in the abstract factory design pattern.
 **/

class BattleshipBlueprint: public SpaceshipBlueprints
{
private:
    
public:
    ///generic Constructor
    BattleshipBlueprint();
    ///generic Destructor
    ~BattleshipBlueprint();
    ///implementation of the pure virtual function inherited from the base class
    Spaceships* createSpaceship();
};

#endif