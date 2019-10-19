#ifndef combatCrew_H
#define combatCrew_H
#include "ManningTheSpaceships/Crew.h"
#include "ManningTheSpaceships/Soldier.h"


class combatCrew : Crew{
private:
    vector<Soldier*> soldiers;
public:
    combatCrew(/* args */);
    ~combatCrew();
    int getCrewWellBeing();
     
};

#endif