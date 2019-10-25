#ifndef combatCrewFactory_H
#define combatCrewFactory_H
#include "ManningTheSpaceships/crewFactory.h"

/**
 * This is one of the Concrete Factories in the Abstract factory design pattern
 * */

class combatCrewFactory : public crewFactory {
private:
  
public:
    ///generic Constructor
    combatCrewFactory();
     ///generic Destructor
    ~combatCrewFactory();
    /**
     * This is an implementation of a pure virtual function that was inherited from the base class.
     * This method will create a new Combat crew
     * Combat Crews have soldiers
     * */
     combatCrew* ProduceCombatCrew();
     ///This method can be ignored in this class
     regularCrew* ProduceRegularCrew(){return nullptr;};
     
};

#endif