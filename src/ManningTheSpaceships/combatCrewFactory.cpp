#include "ManningTheSpaceships/combatCrewFactory.h"


combatCrewFactory::combatCrewFactory(/* args */) : crewFactory() {
    
}

combatCrewFactory::~combatCrewFactory() {
    
}

combatCrew* combatCrewFactory::ProduceCombatCrew() {
    combatCrew* X = new combatCrew();
    return X;
}
