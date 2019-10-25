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
#include "SpaceShips/SpaceStation.h"

#include "SpaceShips/Battleship.h"
#include "SpaceShips/BattleshipBlueprint.h"
#include "SpaceShips/BoringBridge.h"
#include "SpaceShips/BoringSickBay.h"
#include "SpaceShips/BoringSleepQuarters.h"
#include "SpaceShips/Fighter.h"
#include "SpaceShips/FighterBlueprint.h"
#include "CommunicationSystem/Radio.h"

#include <iostream>
#include <Fleet/Fleet.h>

using namespace std;
int main(){

      //radio creation 
    //==================================
        Radio* radio = new Radio();
    //==================================

        //Making the space-Station
    //==================================
    SpaceStation* station = new SpaceStation();
    radio->registerShip(station);
    station->setRadio(radio);

    //===================================
        //testing spaceships factory
    //==================================
    BattleshipBlueprint* myBattleshipcreator = new BattleshipBlueprint();
    FighterBlueprint* Fightershipcreator = new FighterBlueprint();

    typedef Spaceships* myBattleshipArray ;
    myBattleshipArray* Battleships = new myBattleshipArray[5];

    typedef Spaceships* myFighterShipArray ;
    myFighterShipArray* Fighterships = new myFighterShipArray[5];


    for(int i=0;i<5;i++){

        
        Battleships[i] = myBattleshipcreator->createSpaceship();
        Battleships[i]->addr(new BoringBridge() ,new BoringSickBay(), new BoringSleepQuarters());

        
         Fighterships[i] = Fightershipcreator->createSpaceship();
        Fighterships[i]->addr(new BoringBridge() ,new BoringSickBay(), new BoringSleepQuarters());

        radio->registerShip(Battleships[i]);
        radio->registerShip(Fighterships[i]);

        Battleships[i]->setRadio(radio);
        Fighterships[i]->setRadio(radio);

        Battleships[i]->setEnergy(0);
        Fighterships[i]->setEnergy(50);

    }
    //==================================

        //testing the radio
    //====================================
        //station->makeDailyAnnouncement();
          station->getStatus();
          station->getStatus();

    //====================================


      

    return 0;
}*/