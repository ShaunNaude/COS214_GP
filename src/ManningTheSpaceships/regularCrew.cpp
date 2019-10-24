#include "ManningTheSpaceships/regularCrew.h"


regularCrew::regularCrew(/* args */) {
     
}

regularCrew::~regularCrew() {
    
}

int regularCrew::getAVGCrewWellBeing() {
    float AvgWellBeing = 0;
    int totalcrew = 9;

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

    AvgWellBeing = AvgWellBeing/totalcrew;
    return trunc(AvgWellBeing);


}

void regularCrew::takeDamage()
{
    srand(time(0));
    int damage = (rand() % 25) + 1;

    vector<Engineer*>::iterator it;
    it = this->Engineers.begin();
    while( (it != Engineers.end()) )
    {
       (*it)->setWellBeing((*it)->getWellBeing() - damage);
        it++;
    }

     damage = (rand() % 25) + 1;
    this->captain->setWellBeing(captain->getWellBeing() - damage);

     damage = (rand() % 25) + 1;
    this->doc->setWellBeing(doc->getWellBeing() - damage);

    damage = (rand() % 25) + 1;
    this->navigator->setWellBeing(navigator->getWellBeing() - damage);

    damage = (rand() % 25) + 1;
    this->chiefEng->setWellBeing(chiefEng->getWellBeing() - damage);
}
