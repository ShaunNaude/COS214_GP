#ifndef FRIGATE_H
#define FRIGATE_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"

/**
 * This class is a Concrete product in the abstract factory design pattern.
 * */

class Frigate:public Spaceships
{
private:
    ///reference to the regular crew that is on the ship
    regularCrew* frigateCrew;
    /**
     * static counter that will keep track of how many Frigates are currently in use
     * */
    static int count;
    ///every frigate will have a unique identifier.
    int ID;
public:
    ///generic Constructor
    Frigate(/* args */);
    ///generic Destructor
    ~Frigate();
    ///Decorator function
    void printComponent();
    ///This method is used to receive transmission from the radio.
    void receiveMsg(string);
    
};

#endif