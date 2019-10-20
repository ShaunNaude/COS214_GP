#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Spaceships.h"
#include <vector>
#include "ManningTheSpaceships/Commander.h"
using namespace std;
class SpaceStation: public Spaceships
{
private:
    
protected:
    string currentThreatLVL;
    vector<Spaceships*> VisitingSpaceships;
    Commander* commander;

public:
    ///functions
    SpaceStation(/* args */);
    ~SpaceStation();
    void increaseThreatLVL();
    void decreaseThreatLVL();
    void setThreatLVL(string);
    string getThreatLVL();
  /*   ///setters

    ///getters

    ///getters
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