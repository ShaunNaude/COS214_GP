//
// Created by danienel21 on 2019/10/19.
//

#ifndef COS214_GP_FLEET_H
#define COS214_GP_FLEET_H


#include <SpaceShips/Spaceships.h>
#include <vector>
#include <SpaceShips/SpaceStation.h>
#include <Planets/Map.h>

class Fleet {
private:
    int resourcesFleet;
    Map* mapFleet;
    vector<Spaceships*> shipsFleet;
    SpaceStation* spaceStation;


protected:
public:

    Fleet();


};


#endif //COS214_GP_FLEET_H
