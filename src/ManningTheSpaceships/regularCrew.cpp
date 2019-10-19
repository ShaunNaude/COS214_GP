#include "regularCrew.h"


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

    AvgWellBeing = AvgWellBeing/9;
    return trunc(AvgWellBeing);


}
