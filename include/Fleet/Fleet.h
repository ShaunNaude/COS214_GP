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
    void sustain();

// TODO: Finish sustain by making crew take damage
// TODO: Add more critter classes
// TODO: Convert Map into command design pattern
// TODO: Add an iterator design pattern
// TODO: look for other easy design patterns










};


#endif //COS214_GP_FLEET_H
