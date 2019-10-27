#include "ManningTheSpaceships/combatCrew.h"


combatCrew::combatCrew(/* args */) {
    for(int i=0 ; i<5 ; i++)
    {
        Soldier* k = new Soldier();
        k->setName("Soldier :" + to_string(i));
        k->setRank(5);
        k->setDuty(true);
        k->setWellBeing(99);
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
        it2++;
    }

    AvgWellBeing = AvgWellBeing/totalcrew;
    return trunc(AvgWellBeing);
}


void combatCrew::takeDamage()
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

void combatCrew::healAll()
{
    this->doc->Heal(chiefEng);
    this->doc->Heal(navigator);
    this->doc->Heal(captain);
    
     vector<Engineer*>::iterator it;
    it = this->Engineers.begin();
    while( (it != Engineers.end()) )
    {
        this->doc->Heal(*(it));
        it++;
    }

     vector<Soldier*>::iterator it2;
    it2 = soldiers.begin();
    while( (it2 != soldiers.end()) )
    {
       this->doc->Heal(*(it2));
        it2++;
    }
}