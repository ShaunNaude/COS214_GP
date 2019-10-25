//
// Created by danienel21 on 2019/10/19.
//
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
#include <SpaceShips/FighterBlueprint.h>
#include <Command/Command.h>
#include <Command/attackPlanet.h>
#include <Command/Button.h>
#include <Command/tradePlanet.h>
#include <Command/explorePlanet.h>
#include <Command/moveFleetToPlanet.h>


using namespace std;
int main(){

    int day = 0;

    Fleet* ImperialFleet = Fleet::Instance();

    Command* attack = new attackPlanet(ImperialFleet);
    Command* trade = new tradePlanet(ImperialFleet);
    Command* explore = new explorePlanet(ImperialFleet);
    Command* move = new moveFleetToPlanet(ImperialFleet);

    Button* btnAttack = new Button(attack);
    Button* btnTrade = new Button(trade);
    Button* btnExplore = new Button(explore);
    Button* btnMove = new Button(move);





    while(!ImperialFleet->isTotalDomination()){
        ImperialFleet->station->getStatus();
        ImperialFleet->listPlanets();


    }




    return 0;
}



















