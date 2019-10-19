#include "ManningTheSpaceships/combatCrew.h"


combatCrew::combatCrew(/* args */) {
    for(int i=0 ; i<5 ; i++)
    {
        Soldier* k = new Soldier();
        k->setName("Soldier :" + to_string(i));
        k->setRank(5);
        k->setDuty(true);
        k->setWellBeing(100);
        soldiers.push_back(k);
    }

}

combatCrew::~combatCrew() {
    
}

int combatCrew::getAVGCrewWellBeing() {
    float AvgWellBeing = 0;
    int totalcrew = 14;

    AvgWellBeing = this->captain->getWellBeing();
    AvgWellBeing = AvgWellBeing + this->doc->getWellBeing();
    AvgWellBeing = AvgWellBeing + this->navigator->getWellBeing();
    AvgWellBeing = AvgWellBeing + this->chiefEng->getWellBeing();

    vector<Engineer*>::iterator it;
    it = this->Engineers.begin();
    while( (it != Engineers.end()) )
    {
        AvgWellBeing = AvgWellBeing + (*it)->getWellBeing();
        it++;
    }

    vector<Soldier*>::iterator it2;
    it2 = soldiers.begin();
    while( (it2 != soldiers.end()) )
    {
        AvgWellBeing = AvgWellBeing + (*it2)->getWellBeing();
        it++;
    }

    AvgWellBeing = AvgWellBeing/totalcrew;
    return trunc(AvgWellBeing);
}
