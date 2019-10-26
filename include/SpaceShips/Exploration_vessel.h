#ifndef EXPLORATION_VESSEL_H
#define EXPLORATION_VESSEL_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"

/**
 * This class is a concrete product in the abstract factory design pattern.
 * */

class Exploration_vessel:public Spaceships
{
private:
     ///reference to the regular crew that is on the ship
     regularCrew* ExplorationCrew; 
     /**
     * static counter that will keep track of how many Exploration vessels are currently in use
     * */
    static int count;
     ///every Exploration vessels will have a unique identifier.
    int ID;
public:
    ///generic Constructor
    Exploration_vessel(/* args */);
    ///generic Destructor
    ~Exploration_vessel();
    ///This method is used to receive transmission from the radio.
    void receiveMsg(string);
    ///Decorator function
    void printComponent();
    
};

#endif