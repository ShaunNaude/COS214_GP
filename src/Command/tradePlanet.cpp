//
// Created by danienel21 on 2019/10/25.
//

#include "Command/tradePlanet.h"
#include "Fleet/Fleet.h"

bool tradePlanet::execute(int index) {
    return receiver->tradePlanet(index);
}

tradePlanet::tradePlanet(Fleet *F) : Command(F) {

}
