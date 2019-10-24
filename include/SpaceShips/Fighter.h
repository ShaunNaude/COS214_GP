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
    static int count;
    int ID;
public:
    Fighter(/* args */);
    ~Fighter();
  
    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
    void receiveMsg(string);
};

#endif