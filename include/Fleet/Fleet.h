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
    Planet* currentPlanet;
    bool totalDomination;


protected:
public:

    Fleet();
    Map* getMap();


    void listPlanets();
    bool attackPlanet(int index);
    bool tradePlanet(int index);
    bool explorePlanet(int index);
    bool moveFleetToPlanet(int index);









};


#endif //COS214_GP_FLEET_H
