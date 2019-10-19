#include "ManningTheSpaceships/Doctor.h"


Doctor::Doctor(/* args */) {
    
}

Doctor::~Doctor() {
    
}

void Doctor::Heal(Human* patient) {
    patient->receiveTreatment();
}
