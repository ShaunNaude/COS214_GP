#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"


class Battleship: public Spaceships
{
private:
    regularCrew* battleShipCrew;
public:
    Battleship(/* args */);
    ~Battleship();
  /*  ///getters
    int getDisplacement();
    int getPower();
    int getThrust();
    int getMax_speed();
    int getStall_speed();
    int getCandP_Capacity();
    int getEnergy();
    ///setters
    void setDisplacement(int);
    void setPower(int);
    void setThrust(int);
    void setMax_speed(int);
    void setStall_speed(int);
    void setCandP_Capacity(int);
    void setEnergy(int); */
    ///Other functions
    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
};

#endif