//
// Created by danienel21 on 2019/10/19.
//

#include <vector>
#include <iostream>
#include "Planets/Planet.h"

void Planet::addNeighbour(Route* r) {

    neighbourPlanets.push_back(r);

}

int Planet::getResources() {
    return resources;
}

vector<Route *> Planet::getNeighbours() {
    return neighbourPlanets;
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

const string &Planet::getPlanetName() const {
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

