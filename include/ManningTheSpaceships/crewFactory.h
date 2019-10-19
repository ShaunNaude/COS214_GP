#ifndef crewFactory_H
#define crewFactory_H
#include "ManningTheSpaceships/Human.h"
class combatCrew;
class regularCrew;

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