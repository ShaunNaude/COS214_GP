#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"
class Transporter:public Spaceships
{
private:
   regularCrew* transporterCrew;
    static int count;
    int ID;
public:
    Transporter(/* args */);
    ~Transporter();
   
    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
};

#endif