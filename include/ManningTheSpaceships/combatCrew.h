#ifndef combatCrew_H
#define combatCrew_H
#include "ManningTheSpaceships/Crew.h"
#include "ManningTheSpaceships/Soldier.h"


class combatCrew :  public Crew{
private:
    vector<Soldier*> soldiers;
public:
    combatCrew(/* args */);
    ~combatCrew();
    int getAVGCrewWellBeing();
    void takeDamage();
    void healAll();
     
};

#endif