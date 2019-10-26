#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"

/**
 * This class is a Concrete product in the abstract factory design pattern.
 * */

class Transporter:public Spaceships{
private:
    ///reference to the regular crew that is on the ship
    regularCrew* transporterCrew;
    /**
     * static counter that will keep track of how many Transporters are currently in use
     * */
    static int count;
    ///every Transporter will have a unique identifier.
    int ID;
public:
    ///generic Constructor
    Transporter();
    ///generic Destructor
    ~Transporter();
    ///Decorator function
    void printComponent();
    ///This method is used to receive transmission from the radio.
    void receiveMsg(string);
    
};

#endif