//
// Created by danienel21 on 2019/10/25.
//

#include "Command/moveFleetToPlanet.h"
#include "Fleet/Fleet.h"

bool moveFleetToPlanet::execute(int index) {

   return  receiver->moveFleetToPlanet(index);

}

moveFleetToPlanet::moveFleetToPlanet(Fleet *F) : Command(F) {


}
