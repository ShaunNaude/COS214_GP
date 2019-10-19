#ifndef comabtCrewFactory_H
#define comabtCrewFactory_H
#include "ManningTheSpaceships/crewFactory.h"


class comabtCrewFactory : public crewFactory {
private:
    /* data */
public:
    comabtCrewFactory(/* args */);
    ~comabtCrewFactory();
     combatCrew* ProduceCombatCrew();
    
};

#endif