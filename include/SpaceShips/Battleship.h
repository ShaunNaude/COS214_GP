#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"

/**
 * This class is a Concrete product in the abstract factory design pattern.
 * */

class Battleship: public Spaceships{
private:
    ///reference to the regular crew that is on the ship
    regularCrew* battleShipCrew;
    /**
     * static counter that will keep track of how many battleships are currently in use
     * */
    static int count;
    ///every Battleship will have a unique identifier.
    int ID;
public:
    ///generic Constructor
    Battleship(/* args */);
    ///generic Destructor
    ~Battleship();
    ///Decorator function
    void printComponent();
    ///This method is used to receive transmission from the radio.
    void receiveMsg(string);
   
};

#endif