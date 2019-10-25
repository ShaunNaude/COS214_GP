//
// Created by danienel21 on 2019/10/25.
//
#include "Fleet/Fleet.h"
#include "Command/attackPlanet.h"

bool attackPlanet::execute(int index) {

    return receiver->attackPlanet(index);

}

attackPlanet::attackPlanet(Fleet *F) : Command(F) {


}
