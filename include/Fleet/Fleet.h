#ifndef COS214_GP_FLEET_H
#define COS214_GP_FLEET_H
#include <SpaceShips/Spaceships.h>
#include <vector>
#include <SpaceShips/SpaceStation.h>
#include <Planets/Map.h>

/**
 * This class will be used as a facade from the Facade design pattern.
 * The purpose of this class it to make interfacing with all the subsystems intuitive
 * This class Delegates client requests to appropriate subsystem objects.
 * */

    //SHAUN TODO
//TODO: finish doxygen comments in this class when main is done.

class Fleet {
private:

    static Fleet* singletonInstance;



    int resourcesFleet;
    Map* mapFleet;
    vector<Spaceships*> shipsFleet;

    Planet* currentPlanet;




protected:
    Fleet();
public:
    Radio* radio;
    SpaceStation* station;
    static Fleet* Instance();

    Map* getMap();

    void fleetInfo();
    void summarisedListPlanets();
    void listPlanets();
    bool attackPlanet(int index);
    bool tradePlanet(int index);
    bool explorePlanet(int index);
    bool moveFleetToPlanet(int index);
    bool isTotalDomination();
    void sustain();



    //DANIE TODO
// TODO: Add more critter classes
// TODO: Add an iterator design pattern
// TODO: look for other easy design patterns










};


#endif //COS214_GP_FLEET_H
