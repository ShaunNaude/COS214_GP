#ifndef FIGHTER_H
#define FIGHTER_H
#include "Spaceships.h"
#include "ManningTheSpaceships/combatCrewFactory.h"
#include "ManningTheSpaceships/combatCrew.h"
///Class definition for a Fighter spaceship
/**This class represents a fighter spceship which travels and destroys enemy spaceships*/
class Fighter:public Spaceships
{
private:
    combatCrew* fighterCrew;
public:
    Fighter(/* args */);
    ~Fighter();
   /* ///getters
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