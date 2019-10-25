#ifndef Crew_H
#define Crew_H
#include "ManningTheSpaceships/Engineer.h"
#include "ManningTheSpaceships/Doctor.h"
#include "ManningTheSpaceships/chiefEngineer.h"
#include "ManningTheSpaceships/Captain.h"
#include "ManningTheSpaceships/Navigator.h"
#include <vector>
#include <cmath>
using namespace std;

/**
 * This class is the Abstract Product in the Abstract factory design pattern.
 * This class will be the base class for two different types of crews.
 * */

class Crew{
protected:
    ///Vector to store engineers that are part of the crew
    vector<Engineer*> Engineers;
    ///Pointer to the Chief Engineer of the crew
    chiefEngineer* chiefEng;
    ///pointer to the Captain of the crew
    Captain* captain;
    ///pointer to the navigator of the crew
    Navigator* navigator;
    ///pointer to the doctor of the crew
    Doctor* doc;
   
    

public:
    ///generic Constructor
    Crew();
    ///generic Destructor 
    ~Crew();
    /**
     * This is a pure virtual method that will be implemented in the base classes
     * This method will return an average well-being for the crew
     * */
    virtual int getAVGCrewWellBeing()=0;
    /**
     * This is a virtual function that will be implemented in the base classes.
     * This method will subtract a random value from the crew members well-being.
     * This method is executed when the ship is under attack
     * */
    virtual void takeDamage();
    /**
     * This is a pure virtual function that will be implemented in the base classes.
     * This method is called when the well-being of the crew x<50
     * This method will request the doctor of the crew to heal each person on the ship.
     * */
    virtual void healAll()=0;
    /**
     * This Method will instruct all the engineers that they need to make fuel.
     * This method is only called if the Average fuel for all ships is x<50.
     * */
    int increaseEnergy();
    
};

#endif