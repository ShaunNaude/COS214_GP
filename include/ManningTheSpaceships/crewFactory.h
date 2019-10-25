#ifndef crewFactory_H
#define crewFactory_H
#include "ManningTheSpaceships/regularCrew.h"
#include "ManningTheSpaceships/combatCrew.h"

/**
 * This class is the AbstractFactory in the abstract factory design pattern
 * This will be the base class for two concrete factories
 * */

class crewFactory {
private:
    
public:
    ///generic Constructor
    crewFactory(/* args */);
    ///generic Destructor
    ~crewFactory();
    /**
     * This method is a pure virtual function.
     * This method will be implemented in the combatCrewFactory (Concrete factory)
     * */
    virtual combatCrew* ProduceCombatCrew()=0;
     /**
     * This method is a pure virtual function.
     * This method will be implemented in the regularCrewFactory (Concrete factory)
     * */
    virtual regularCrew* ProduceRegularCrew()=0;
};

#endif