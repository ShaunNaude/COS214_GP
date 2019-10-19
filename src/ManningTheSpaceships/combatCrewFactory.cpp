#include "ManningTheSpaceships/combatCrewFactory.h"


comabtCrewFactory::comabtCrewFactory(/* args */) {
    
}

comabtCrewFactory::~comabtCrewFactory() {
    
}

combatCrew* comabtCrewFactory::ProduceCombatCrew() {
    combatCrew* X = new combatCrew();
    return X;
}
