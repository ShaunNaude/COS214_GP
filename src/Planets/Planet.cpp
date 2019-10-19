//
// Created by danienel21 on 2019/10/19.
//

#include <vector>
#include <iostream>
#include <Critters/Critter.h>
#include "Planets/Planet.h"


int Planet::getResources() {
    return resources;
}


Planet::Planet(string name, int resources) {
    planetName = name;
    this->resources = resources;
    discovered = false;
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

int Planet::getRelationship() const {
    return relationship;
}

const vector<Critter*> &Planet::getCrittersPlanet() const {
    return crittersPlanet;
}

void Planet::calculateRelationship() {
    relationship = 0;
    for(auto it = crittersPlanet.begin(); it!= crittersPlanet.end();it++){
        relationship += (*it)->getHumanToleranceLevel();
    }


}


