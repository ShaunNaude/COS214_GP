#ifndef FRIGATE_H
#define FRIGATE_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"
class Frigate:public Spaceships
{
private:
    regularCrew* frigateCrew;
     static int count;
     int ID;
public:
    Frigate(/* args */);
    ~Frigate();
   
    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
    void receiveMsg(string);
};

#endif