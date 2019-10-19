#include "Crew.h"


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

    

}

Crew::~Crew() {
    
}


