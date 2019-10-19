//
// Created by danienel21 on 2019/10/19.
//

#include <vector>
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
}
