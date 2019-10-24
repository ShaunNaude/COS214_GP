#ifndef combatCrewFactory_H
#define combatCrewFactory_H
#include "ManningTheSpaceships/crewFactory.h"


class combatCrewFactory : public crewFactory {
private:
    /* data */
public:
    combatCrewFactory(/* args */);
    ~combatCrewFactory();
     combatCrew* ProduceCombatCrew();
     regularCrew* ProduceRegularCrew(){return nullptr;};//ignore this method
     
    
};

#endif