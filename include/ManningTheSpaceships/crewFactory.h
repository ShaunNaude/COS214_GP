#ifndef crewFactory_H
#define crewFactory_H

#include "ManningTheSpaceships/regularCrew.h"
#include "ManningTheSpaceships/combatCrew.h"


class crewFactory {
private:
    /* data */
public:
    crewFactory(/* args */);
    ~crewFactory();
    virtual combatCrew* ProduceCombatCrew()=0;
    virtual regularCrew* ProduceRegularCrew()=0;
};

#endif