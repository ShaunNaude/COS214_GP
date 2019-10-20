//
// Created by danienel21 on 2019/10/19.
//

#ifndef COS214_GP_MAP_H
#define COS214_GP_MAP_H


#include <vector>
#include "Planet.h"
using namespace std;

class Map {
private:
    vector<Planet*> planetList;
    vector<Route*> routesPlanets;

public:
    Map();
    void addPlanet(Planet* p);
    void addRoute(Route* r);
    vector<Route*> getRoutes();
    vector<Planet*> getPlanets();
};


#endif //COS214_GP_MAP_H
