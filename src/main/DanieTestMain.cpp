//
// Created by danienel21 on 2019/10/19.
//
#include "ManningTheSpaceships/crewFactory.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"
#include "ManningTheSpaceships/Crew.h"
#include "ManningTheSpaceships/combatCrewFactory.h"
#include "ManningTheSpaceships/combatCrew.h"
#include <iostream>

using namespace std;
int main(){
        //testing crew factory
    //==================================
        crewFactory* Fact1 = new regularCrewFactory(); //regular crew does not have soldiers
        regularCrew* Regcrew = Fact1->ProduceRegularCrew();
        cout<<"crew Well-being: "<<Regcrew->getAVGCrewWellBeing()<<endl;

        Fact1 = new combatCrewFactory(); //combat crew does have soldiers
        combatCrew* Comcrew = Fact1->ProduceCombatCrew();
        cout<<"crew Well-being: "<<Comcrew->getAVGCrewWellBeing()<<endl;    
    //==================================
    return 0;

}
