#include "ManningTheSpaceships/Crew.h"
#include <iostream>


Crew::Crew(/* args */) {
   for(int i=0 ; i<5 ; i++)
    {
        Engineer* k = new Engineer();
        k->setName("Engineer :" + to_string(i));
        k->setRank(5);
        k->setDuty(true);
        k->setWellBeing(100);
        Engineers.push_back(k);
    }

    chiefEng = new chiefEngineer();
    chiefEng->setName("chief-Engineer");
    chiefEng->setRank(6);
    chiefEng->setWellBeing(100);

    captain = new Captain();
    captain->setName("captain");
    captain->setRank(9);
    captain->setWellBeing(100);

    navigator = new Navigator();
    navigator->setName("captain");
    navigator->setRank(5);
    navigator->setWellBeing(100);

    doc = new Doctor();
    doc->setName("Doctor");
    doc->setRank(5);
    doc->setWellBeing(100);


}

Crew::~Crew() {
    
}

void Crew::takeDamage(){
    cout<<"ur fucked"<<endl;
}


