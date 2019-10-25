#ifndef combatCrew_H
#define combatCrew_H
#include "ManningTheSpaceships/Crew.h"
#include "ManningTheSpaceships/Soldier.h"

/**
 * This class is a Concrete Product in the abstract factory design pattern
 * This class is derived from the Crew base class
 * */

class combatCrew :  public Crew{
private:
    /**
     * This is a vector that Holds all the soldiers that are part of the crew.
     * Soldiers are unique to Combat Crews
     * */
    vector<Soldier*> soldiers;
public:
    ///generic Constructor
    combatCrew(/* args */);
    ///generic Destructor
    ~combatCrew();
     ///implementation of inherited fucntion
    int getAVGCrewWellBeing();
     ///implementation of inherited fucntion
    void takeDamage();
     ///implementation of inherited fucntion
    void healAll();
     
};

#endif