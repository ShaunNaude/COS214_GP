#include "ManningTheSpaceships/Human.h"


Human::Human() {
    
}

Human::~Human() {
    
}

string Human::getName() {
    return this->Name;
}

void Human::setName(string name) {
    this->Name = name;
}

int Human::getWellBeing() {
    return this->WellBeing;
}

void Human::setWellBeing(int WB) {
    this->WellBeing = WB;
}

bool Human::getDuty() {
    return this->onDuty;
}

void Human::setDuty(bool status) {
    this->onDuty = status;
}

int Human::getRank() {
    return this->rank;
}

void Human::setRank(int rank) {
    this->rank = rank;
}

void Human::receiveTreatment(){
    this->WellBeing = 99;
}
