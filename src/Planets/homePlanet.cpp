//
// Created by danienel21 on 2019/10/19.
//

#include <iostream>
#include "Planets/homePlanet.h"



homePlanet::homePlanet(const string &name, int resources) : Planet(name, resources) {
    habitable = true;
    discovered = true;
    status = "HomePlanet";
    setRelationship(10);

}

