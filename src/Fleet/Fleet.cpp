//
// Created by danienel21 on 2019/10/19.
//

#include <Planets/homePlanet.h>
#include <iostream>
#include <iomanip>
#include <SpaceShips/FighterBlueprint.h>
#include <SpaceShips/BattleshipBlueprint.h>
#include <SpaceShips/BoringBridge.h>
#include <SpaceShips/BoringSickBay.h>
#include <SpaceShips/BoringSleepQuarters.h>
#include <SpaceShips/Exploration_vesselBlueprint.h>
#include "Fleet/Fleet.h"
#include "Planets/Route.h"
#include "Iterator/vectorPlanetsIterator.h"


Fleet::Fleet() {

    Planet *p1 = new homePlanet("Mar Sara",1000);
    Planet* p2 = new Planet("Aiur",2000);
    Planet* p3 = new Planet("Tarsonis",2000);
    Planet* p4 = new Planet("Char",2000);

    Route * r1 = new Route(p1,p2,10);
    Route * r4 = new Route(p1,p3,10);
    Route * r2 = new Route(p4,p3,10);
    Route * r3 = new Route(p4,p2,10);



    resourcesFleet = 10000;

    p2->addBasicCritters(10);
    p3->addBasicCritters(10);
    p4->addBasicCritters(10);

    mapFleet = new Map();

    mapFleet->addPlanet(p1);
    mapFleet->addPlanet(p2);
    mapFleet->addPlanet(p3);
    mapFleet->addPlanet(p4);

    mapFleet->addRoute(r1);
    mapFleet->addRoute(r2);
    mapFleet->addRoute(r3);
    mapFleet->addRoute(r4);

    currentPlanet = p1;

    radio = new Radio();
    station = new SpaceStation();
    radio->registerShip(station);
    station->setRadio(radio);


    BattleshipBlueprint* myBattleshipcreator = new BattleshipBlueprint();
    FighterBlueprint* Fightershipcreator = new FighterBlueprint();
    Exploration_vesselBlueprint* explorationShipCreator = new Exploration_vesselBlueprint();

    typedef Spaceships* myBattleshipArray ;
    myBattleshipArray* Battleships = new myBattleshipArray[5];

    typedef Spaceships* myFighterShipArray ;
    myFighterShipArray* Fighterships = new myFighterShipArray[5];

    typedef Spaceships* myExplorationShipArray;
    myExplorationShipArray * explorationShips = new myExplorationShipArray[5];


    for(int i=0;i<5;i++){


        Battleships[i] = myBattleshipcreator->createSpaceship();
        Battleships[i]->addr(new BoringBridge() ,new BoringSickBay(), new BoringSleepQuarters());


        Fighterships[i] = Fightershipcreator->createSpaceship();
        Fighterships[i]->addr(new BoringBridge() ,new BoringSickBay(), new BoringSleepQuarters());

        explorationShips[i] = explorationShipCreator->createSpaceship();
        explorationShips[i]->addr(new BoringBridge() ,new BoringSickBay(), new BoringSleepQuarters());

        radio->registerShip(Battleships[i]);
        radio->registerShip(Fighterships[i]);

        Battleships[i]->setRadio(radio);
        Fighterships[i]->setRadio(radio);
        explorationShips[i]->setRadio(radio);



    }



    for(int i = 0 ; i < 5 ; i ++){
        shipsFleet.push_back(Battleships[i]);
        shipsFleet.push_back(Fighterships[i]);
        shipsFleet.push_back(explorationShips[i]);
    }

    station->getStatus();
    station->getStatus();









}

Map *Fleet::getMap() {
    return mapFleet;
}

void Fleet::listPlanets() {

    vector<Planet*> planets = mapFleet->getPlanets();
    vector<Route*> routes= mapFleet->getRoutes();
    vectorPlanetsIterator* i = new vectorPlanetsIterator(planets);

    int id = 0;


    cout<<"//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"List of planets in current solar system:"<< endl;

    for(i->First() ;!i->IsDone();i->Next()){


        cout<<"ID"<<setw(20)<< "Name"<<setw(20)<<"Resources"<<setw(20)<<"ThreatLevel"<<setw(20)<<"relationship"<<setw(20)<<"discovered"
            <<setw(20)<<"habitable"<<setw(20)<<"status"<<endl;


        if((*i).currentItem()->isDiscovered()){
            cout<<id++<<setw(20)<<(*i).currentItem()->getPlanetName()<<setw(20)<<(*i).currentItem()->getResources()<<setw(20)<<(*i).currentItem()->getThreatLevel()<<setw(20)<<(*i).currentItem()->getRelationship()
                <<setw(20)<<(*i).currentItem()->isDiscovered()<<setw(20)<<(*i).currentItem()->isHabitable()
                <<setw(20)<<(*i).currentItem()->getStatus()<<endl;

        }else{
            cout<<id++<<setw(20)<<(*i).currentItem()->getPlanetName()<<setw(20)<<"Not Discovered"<<setw(20)<<"Not Discovered"<<setw(20)<<"Not Discovered"
                <<setw(20)<<(*i).currentItem()->isDiscovered()<<setw(20)<<"Not Discovered"
                <<setw(20)<<(*i).currentItem()->getStatus()<<endl;
        }


        cout<<endl;


    }
    cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;

    cout<<setw(20)<<"Current Fleet Location:"<<endl;
    cout<<setw(20)<<currentPlanet->getPlanetName()<<endl;

    cout<<setw(20)<<"Planets we can currently travel to:"<<endl;

    id = 0;


    for(i->First() ;!i->IsDone();i->Next()){
        if((*i).currentItem()->isHabitable()){
            cout<<id++<<setw(20)<<(*i).currentItem()->getPlanetName()<<endl;
        }
    }
    cout<<endl;
    id = 0;

    cout<<setw(20)<<"Planets we must still discover:"<<endl;
    for(i->First() ;!i->IsDone();i->Next()){
        if(!(*i).currentItem()->isDiscovered()){
            cout<<id++<<setw(20)<<(*i).currentItem()->getPlanetName()<<endl;
        }
    }




}

bool Fleet::tradePlanet(int index) {

    vector<Planet*> planetList;
    Planet* tempPlanet;
    planetList = mapFleet->getPlanets();
    tempPlanet = planetList.at(index);

    if(tempPlanet->isDiscovered()){
        if(resourcesFleet>100){
            planetList.at(index)->addResources(100);
            resourcesFleet -= 100;
            planetList.at(index)->incRelationship();

            if(planetList.at(index)->getRelationship()>=7&&planetList.at(index)->getStatus()!="Conquered"){
                planetList.at(index)->setStatus("Friendly Trade");
            }

            if(planetList.at(index)->getRelationship()>=7){
                planetList.at(index)->setHabitable(true);
            }else{
                planetList.at(index)->setHabitable(false);
            }
            cout<<"Successfully Traded with planet"<<tempPlanet->getPlanetName()<<endl;
            return true;
        }else{
            cout<<"You require additional resources to trade! The locals are enraged with your offer!"<<endl;
            planetList.at(index)->decRelationship();
            return true;
        }

    }else{
        cout<<tempPlanet->getPlanetName()<< "has not been discovered yet."<<endl;
        return false;
    }




}

bool Fleet::explorePlanet(int index) {
    vector<Planet*> planetList;
    planetList = mapFleet->getPlanets();
    if(planetList.at(index)->isDiscovered()){
        cout<<planetList.at(index)->getPlanetName()<<" already explored"<<endl;
        return false;
    }else{
        for(auto it = shipsFleet.begin(); it != shipsFleet.end(); it++){
            if((*it)->type=="Exploration"){
                planetList.at(index)->addFriendlyShip((*it));
                shipsFleet.erase(it--);
                planetList.at(index)->setStatus("Explored");
                planetList.at(index)->setDiscovered(true);
                cout<<"Successfully explored"<<endl;
                return true;
            }
        }
    }
    cout<<"No idle exploration ships"<< endl;
    return false;


}

bool Fleet::moveFleetToPlanet(int index) {
    vector<Planet*> planetList;
    Planet* tempPlanet;
    planetList = mapFleet->getPlanets();
    tempPlanet = planetList.at(index);

    if(!tempPlanet->isDiscovered()){
        cout<<"Planet not discovered cannot move fleet."<<endl;
        return false;
    }
    if(planetList.at(index)->getRelationship() >= 7){
        cout<< "The fleet has successfully traveled to planet due to relationship with locals" <<endl;
    }

     if(planetList.at(index)->isHabitable()){
        currentPlanet = planetList.at(index);
        cout<<"The fleet has successfully traveled to planet "<<tempPlanet->getPlanetName()<<endl;
        return true;
    }else{
        cout<<tempPlanet->getPlanetName()<<" currently not safe for the fleet to occupy."
         <<" Please consider moving froward with Total Domination"<<endl;
        return false;
    }

}

bool Fleet::attackPlanet(int index) {
    vector<Planet*> planetList;
    Planet* tempPlanet;
    planetList = mapFleet->getPlanets();
    tempPlanet = planetList.at(index);

    if(!tempPlanet->isDiscovered()){
        cout<<"Can't attack an undiscovered planet!"<<endl;
        return false;
    }

    if(resourcesFleet > tempPlanet->getResources()){
        if(shipsFleet.size() > tempPlanet->getCrittersPlanet().size()){
            tempPlanet->attackPlanet();
                resourcesFleet+= (int)(tempPlanet->getResources()/2);
                tempPlanet->setResources((int)(tempPlanet->getResources()/2));
                tempPlanet->setStatus("Conquered");
            return true;
        }else{
            cout<<"Fleet size to small to attack planet."<<endl;
            return false;
        }
    }else{
        cout<<"We don't have enough resources to attack this planet."<<endl;
        return false;
    }


}

void Fleet::sustain() {

    int newEnergy;

    for(auto it = shipsFleet.begin(); it != shipsFleet.end(); it++){
        newEnergy = (*it)->getEnergy()-10;
        (*it)->setEnergy(newEnergy);
        (*it)->getCrew()->takeDamage();
    }
}

Fleet* Fleet::singletonInstance = 0;

Fleet* Fleet::Instance() {
    if(singletonInstance==0){
        singletonInstance = new Fleet();
    }

    return singletonInstance;
}

bool Fleet::isTotalDomination() {
    vector<Planet*> planets = mapFleet->getPlanets();
    vectorPlanetsIterator* i = new vectorPlanetsIterator(planets);
    for(i->First() ;!i->IsDone();i->Next()){
        if(!(*i).currentItem()->isHabitable()){
            return false;
        }
    }
    return true;

}

void Fleet::summarisedListPlanets() {

    vector<Planet*> planets = mapFleet->getPlanets();
    vectorPlanetsIterator* i = new vectorPlanetsIterator(planets);


    int id = 0;


    cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"List of planets in current solar system:"<< endl;


    cout<<"ID"<<setw(15)<< "Name"<<setw(15)<<"Resources"<<setw(15)<<"ThreatLevel"<<setw(15)<<"relationship"<<setw(15)<<"discovered"
        <<setw(15)<<"habitable"<<setw(15)<<"status"<<endl;

    for(i->First() ;!i->IsDone();i->Next()){

        if((*i).currentItem()->isDiscovered()){
            cout<<id++<<setw(15)<<(*i).currentItem()->getPlanetName()<<setw(15)<<(*i).currentItem()->getResources()<<setw(15)<<(*i).currentItem()->getThreatLevel()<<setw(15)<<(*i).currentItem()->getRelationship()
                <<setw(15)<<(*i).currentItem()->isDiscovered()<<setw(15)<<(*i).currentItem()->isHabitable()
                <<setw(15)<<(*i).currentItem()->getStatus()<<endl;

        }else{
            cout<<id++<<setw(15)<<(*i).currentItem()->getPlanetName()<<setw(15)<<"???"<<setw(15)<<"???"<<setw(15)<<"???"
                <<setw(15)<<(*i).currentItem()->isDiscovered()<<setw(15)<<"???"
                <<setw(15)<<(*i).currentItem()->getStatus()<<endl;
        }



    }




}

void Fleet::fleetInfo() {

    cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"Fleet Info   :"<<endl;
    cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;

    cout<<"Resources: "<<resourcesFleet<<endl;
    cout<<"Current fleet location: "<<currentPlanet->getPlanetName()<<endl;
    cout<<"Fleet Size: "<< shipsFleet.size()<<endl;
    cout<<"Fleet Composition"<<endl;
    int count = 0;

    for(auto it = shipsFleet.begin();it!=shipsFleet.end();it++){
        cout<<(*it)->type<<"  ";
        count++;
        if(count==5){
            count = 0;
            cout<<endl;
        }
    }
    cout<<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;





}
