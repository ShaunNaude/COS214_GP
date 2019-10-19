//
// Created by danienel21 on 2019/10/19.
//

#ifndef COS214_GP_PLANET_H
#define COS214_GP_PLANET_H

#include <string>
#include "Route.h"

using namespace std;

class Planet {
private:
    string planetName;
    vector<Route*> neighbourPlanets;
    int resources;

public:
    Planet(string name , int resources);
    void addNeighbour(Route* r);
    vector<Route*> getNeighbours();
    int getResources();



};


#endif //COS214_GP_PLANET_H
