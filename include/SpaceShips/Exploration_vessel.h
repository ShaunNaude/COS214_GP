#ifndef EXPLORATION_VESSEL_H
#define EXPLORATION_VESSEL_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"
///Class definition for Exploration Vessels
/**This class represents the exploration vessels which trave to discover new planets*/
class Exploration_vessel:public Spaceships
{
private:
    /* data */
     regularCrew* ExplorationCrew; 

    static int count;
    int ID;
public:
    Exploration_vessel(/* args */);
    ~Exploration_vessel();
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
    void setEnergy(int);
    ///Other functions
    void DepleteEnergy(int);*/
    ///Decorator function
    void printComponent();
};

#endif