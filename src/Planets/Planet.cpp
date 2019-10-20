//
// Created by danienel21 on 2019/10/19.
//

#include <vector>
#include <iostream>
#include <Critters/Critter.h>
#include <Critters/critterGrunt.h>
#include "Planets/Planet.h"


int Planet::getResources() {
    return resources;
}


Planet::Planet(string name, int resources) {
    planetName = name;
    this->resources = resources;
    discovered = false;
    status = "Unknown";
    relationship = 5;



}

bool Planet::isDiscovered() const {
    return discovered;
}

void Planet::setDiscovered(bool discovered) {
    Planet::discovered = discovered;
}

bool Planet::isHabitable() const {
    return habitable;
}

void Planet::setHabitable(bool habitable) {
    Planet::habitable = habitable;
}

string Planet::getPlanetName()  {
    if(discovered){
        return planetName;
    }else{
        return "???";
    }

}

void Planet::addFriendlyShip(Spaceships *s) {
    friendlyShips.push_back(s);

}

void Planet::removeFriendlyShip(Spaceships *s) {

    for(auto it = friendlyShips.begin(); it != friendlyShips.end();it++){
        if(*it == s){
            friendlyShips.erase(it);
        }
    }

}

const string &Planet::getStatus() const {
    return status;
}

void Planet::setStatus(const string &status) {
    Planet::status = status;
}


const vector<Critter*> &Planet::getCrittersPlanet() const {
    return crittersPlanet;
}


int Planet::getRelationship()  {

    return relationship;
}


void Planet::addBasicCritters(int num) {
    Critter* tempCritter;
    for(int i =0 ; i<num ; i++){
    tempCritter = new critterGrunt();
    crittersPlanet.push_back(tempCritter);
    }
}

int Planet::getThreatLevel() {

    threatLevel = 0;
    for(auto it = crittersPlanet.begin(); it!= crittersPlanet.end();it++){
        threatLevel+= (*it)->getHumanToleranceLevel();
    }
    return  threatLevel;
}

void Planet::setRelationship(int num) {
    relationship = num;
}


