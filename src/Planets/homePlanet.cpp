//
// Created by danienel21 on 2019/10/19.
//

#include "homePlanet.h"



homePlanet::homePlanet(const string &name, int resources) : Planet(name, resources) {
    habitable = true;
    discovered = true;
    status = "HomePlanet";

}
