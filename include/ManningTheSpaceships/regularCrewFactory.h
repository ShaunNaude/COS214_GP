#ifndef regularCrewFactory_H
#define regularCrewFactory_H
#include "ManningTheSpaceships/crewFactory.h"


class regularCrewFactory : public crewFactory {
private:
    /* data */
public:
    regularCrewFactory(/* args */);
    ~regularCrewFactory();
     regularCrew* ProduceRegularCrew();
     combatCrew* ProduceCombatCrew(){return nullptr;}; //ignore this method
    
};

#endif