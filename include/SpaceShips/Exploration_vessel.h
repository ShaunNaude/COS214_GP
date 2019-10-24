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
    void receiveMsg(string);
    void printComponent();
};

#endif