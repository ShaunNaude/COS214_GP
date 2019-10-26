//
// Created by danienel21 on 2019/10/25.
//

#include "Command/explorePlanet.h"
#include "Fleet/Fleet.h"
bool explorePlanet::execute(int index) {
   return receiver->explorePlanet(index);
}

explorePlanet::explorePlanet(Fleet *F) : Command(F) {

}
