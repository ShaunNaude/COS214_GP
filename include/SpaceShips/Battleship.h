#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"


class Battleship: public Spaceships
{
private:
    regularCrew* battleShipCrew;
    static int count;
    int ID;
public:
    Battleship(/* args */);
    ~Battleship();
 
    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
    void receiveMsg(string);
   
};

#endif