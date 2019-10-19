#include "ManningTheSpaceships/regularCrewFactory.h"


regularCrewFactory::regularCrewFactory(/* args */) {
    
}

regularCrewFactory::~regularCrewFactory() {
    
}

regularCrew* regularCrewFactory::ProduceRegularCrew() {
    regularCrew* X = new regularCrew();
    return X;
}
