#ifndef SPACESHIPS_H
#define SPACESHIPS_H
#include <string>
#include "CommunicationSystem/Radio.h"
#include "ManningTheSpaceships/Crew.h"
#include <iostream>
using namespace std;

/**
 * This class is the Abstract product in the Abstract factory design pattern.
 * This class acts as the abstract class from which all the space ships inherit functionality.
 * This class also acts as the Componenet in the Decorator design pattern.
 * This class is also acts as the Colleague in the mediator design patter.
 * */

class Spaceships
{
private:
    /**
     * This variable is used to indicate how far the ship is from the spaceStation
     * */
    int Displacement;
    /**
     * This varible will hold the Ships power rating.
     * The power can be within 500-1000 units depending on the ship.
     * */ 
    int Power;
    /**
     * This variable will hold the ships thrust level.
     * The Thrust can be within 10-50 units depending on the ship.
     * */
    int Thrust;
    ///This varible holds the ships Maximum speed.
    int Max_speed;
    ///This variable holds the ships Stall_speed.
    int Stall_speed;
    ///This variable holds the ships crew carrying capacity.
    int CandP_Capacity;
    ///This variable will hold the ships current Energy level
    int Energy;
    /**
     * This variable holds a reference to concrete Decorator.
     * This variable is used to decorate the bridge on the ship.
     * */
    Spaceships* bridge;
    /**
     * This variable holds a reference to concrete Decorator.
     * This variable is used to decorate the sick_bay on the ship.
     * */
    Spaceships* sick_bay;
    /**
     * This variable holds a reference to concrete Decorator.
     * This variable is used to decorate the sleeping_quarters on the ship.
     * */
    Spaceships* sleeping_quarters;    
protected:
    ///reference to the radio (reference to mediator)
    Radio* radio;
    ///reference to Abstract Crew
    Crew* crew;
public:
    ///this varible will Hold the Ships type ie. Battleship
    string type;
    ///this variable will hold the ships unique identifier.
    string ID;
    ///generic Constructor
    Spaceships();
    ///generic Destructor
    ~Spaceships();
    ///generic get method
    Crew* getCrew();
    ///generic get method
    int getDisplacement() const;
    ///generic get method
    int getPower() const;
    ///generic get method
    int getThrust() const;
    ///generic get method
    int getCandPCapacity() const;
    ///generic get method
    int getEnergy() const;
    ///generic get method
    int getStallSpeed() const;
    ///generic get method
    int getMaxSpeed() const;
    ///generic get method
    Spaceships* getBridge();
    ///generic get method
    Spaceships* getSick();
    ///generic get method
    Spaceships* getSleep();
    ///generic set method
    void setDisplacement(int displacement);
    ///generic set method
    void setPower(int power);
    ///generic set method
    void setThrust(int thrust);
    ///generic get method
    void setCandPCapacity(int candPCapacity);
    ///generic get method
    void setEnergy(int energy);
    ///generic get method
    void setStallSpeed(int stallSpeed);
    ///generic get method
    void setMaxSpeed(int maxSpeed);
    ///This method will set the Ships radio to the correct frequency
    void setRadio(Radio*);
    /**
     * This method allows ships to send other ships messages individually
     * The message are sent via the radio (mediator).
     * */
    void sendMsg(string,string);
    /**
     * This method handels how the ship receives message over the radio.
     * The method is decalared as virtual becasue different ships will handel messages in different ways.
     * */
    virtual void receiveMsg(string); 
    /**
     * This function will remove Energy from the ship as the ship travels through outer-space
     * This function takes an integer parameter.
     * The value is dependent on how far the ship travels
     * */
    void DepleteEnergy(int amountLost);
    ///Decorator function
    virtual void printComponent() = 0;
    /**
     * This function will add the decorations on to the concrete component of the decorator design pattern
     * */
    virtual void addr(Spaceships*,Spaceships*,Spaceships*);

};

#endif