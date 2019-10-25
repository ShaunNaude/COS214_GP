#ifndef regularCrewFactory_H
#define regularCrewFactory_H
#include "ManningTheSpaceships/crewFactory.h"

/**
 * This is one of the Concrete Factories in the Abstract factory design pattern
 * */

class regularCrewFactory : public crewFactory {
private:
    
public:
    ///generic Constructor
    regularCrewFactory(/* args */);
    ///generic Destructor
    ~regularCrewFactory();
    /**
     * This is an implementation of a pure virtual function that was inherited from the base class.
     * This method will create a new Regular crew
     * Regular Crews do not have soldiers
     * */
     regularCrew* ProduceRegularCrew();
     ///This method can be ignored in this class
     combatCrew* ProduceCombatCrew(){return nullptr;}; 
    
};

#endif