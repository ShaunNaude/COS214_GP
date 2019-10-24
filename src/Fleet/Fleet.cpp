//
// Created by danienel21 on 2019/10/19.
//

#include <Planets/homePlanet.h>
#include <iostream>
#include <iomanip>
#include "Fleet/Fleet.h"
#include "Planets/Route.h"


Fleet::Fleet() {

    Planet *p1 = new homePlanet("home",1000);
    Planet* p2 = new Planet("CritterLand",2000);
    Planet* p3 = new Planet("GrootCritterLand",2000);
    Planet* p4 = new Planet("Hippies",2000);

    Route * r1 = new Route(p1,p2,10);
    Route * r4 = new Route(p1,p3,10);
    Route * r2 = new Route(p4,p3,10);
    Route * r3 = new Route(p4,p2,10);


    p2->addBasicCritters(10);
    p3->addBasicCritters(30);
    p4->addBasicCritters(50);

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










}

Map *Fleet::getMap() {
    return mapFleet;
}

void Fleet::listPlanets() {

    vector<Planet*> planets = mapFleet->getPlanets();
    vector<Route*> routes= mapFleet->getRoutes();
    int id = 0;


    cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"List of planets in current solar system:"<< endl;

    for(auto it = planets.begin(); it != planets.end(); it++){


        cout<<"ID"<<setw(20)<< "Name"<<setw(20)<<"Resources"<<setw(20)<<"ThreatLevel"<<setw(20)<<"relationship"<<setw(20)<<"discovered"
            <<setw(20)<<"habitable"<<setw(20)<<"status"<<endl;


        if((*it)->isDiscovered()){
            cout<<id++<<setw(20)<<(*it)->getPlanetName()<<setw(20)<<(*it)->getResources()<<setw(20)<<(*it)->getThreatLevel()<<setw(20)<<(*it)->getRelationship()
                <<setw(20)<<(*it)->isDiscovered()<<setw(20)<<(*it)->isHabitable()
                <<setw(20)<<(*it)->getStatus()<<endl;

        }else{
            cout<<id++<<setw(20)<<(*it)->getPlanetName()<<setw(20)<<"Not Discovered"<<setw(20)<<"Not Discovered"<<setw(20)<<"Not Discovered"
                <<setw(20)<<(*it)->isDiscovered()<<setw(20)<<"Not Discovered"
                <<setw(20)<<(*it)->getStatus()<<endl;
        }


        cout<<endl;


    }
    cout<<"/////////////////////////////////////////////////////////////////////////////"<<endl;

    cout<<setw(20)<<"Current Fleet Location:"<<endl;
    cout<<setw(20)<<currentPlanet->getPlanetName()<<endl;

    cout<<setw(20)<<"Planets we can currently travel to:"<<endl;

    id = 0;


    for(auto it = planets.begin(); it != planets.end(); it++){
        if((*it)->isHabitable()){
            cout<<id++<<setw(20)<<(*it)->getPlanetName()<<endl;
        }
    }
    cout<<endl;
    id = 0;

    cout<<setw(20)<<"Planets we must still discover:"<<endl;
    for(auto it = planets.begin(); it != planets.end(); it++){
        if(!(*it)->isDiscovered()){
            cout<<id++<<setw(20)<<(*it)->getPlanetName()<<endl;
        }
    }




}
