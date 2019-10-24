//
// Created by danienel21 on 2019/10/19.
//
/*
#include "ManningTheSpaceships/crewFactory.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"
#include "ManningTheSpaceships/Crew.h"
#include "ManningTheSpaceships/combatCrewFactory.h"
#include "ManningTheSpaceships/combatCrew.h"

#include "SpaceShips/Battleship.h"
#include "SpaceShips/BattleshipBlueprint.h"
#include "SpaceShips/BoringBridge.h"
#include "SpaceShips/BoringSickBay.h"
#include "SpaceShips/BoringSleepQuarters.h"

#include <iostream>
#include <Fleet/Fleet.h>

using namespace std;
int main(){
        //testing crew factory
    //==================================
    //    crewFactory* Fact1 = new regularCrewFactory(); //regular crew does not have soldiers
    //    regularCrew* Regcrew = Fact1->ProduceRegularCrew();
    //    cout<<"crew Well-being: "<<Regcrew->getAVGCrewWellBeing()<<endl;

    //    Fact1 = new combatCrewFactory(); //combat crew does have soldiers
    //    combatCrew* Comcrew = Fact1->ProduceCombatCrew();
    //    cout<<"crew Well-being: "<<Comcrew->getAVGCrewWellBeing()<<endl;
    //==================================
        //testing spaceships factory
    //==================================
        BattleshipBlueprint* myBattleshipcreator = new BattleshipBlueprint;
        Spaceships* myBattleship = myBattleshipcreator->createSpaceship();
        myBattleship->addr(new BoringBridge() ,new BoringSickBay(), new BoringSleepQuarters());
        Spaceships* tester = myBattleship->getSleep();
        tester->printComponent();
    //==================================






    Fleet* ImperialFleet = new Fleet();

    ImperialFleet->listPlanets();


    return 0;
}

*/

















