//
// Created by danienel21 on 2019/10/19.
//

#include "Planets/Map.h"

Map::Map() {

}

void Map::addPlanet(Planet * p) {

    planetList.push_back(p);

}

void Map::addRoute(Route *r) {

    routesPlanets.push_back(r);

}

vector<Route *> Map::getRoutes() {
    return routesPlanets;
}

vector<Planet *> Map::getPlanets() {
    return planetList;
}
