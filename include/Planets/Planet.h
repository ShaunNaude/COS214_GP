//
// Created by danienel21 on 2019/10/19.
//

#ifndef COS214_GP_PLANET_H
#define COS214_GP_PLANET_H

#include <string>
#include <SpaceShips/Spaceships.h>
#include "Route.h"

using namespace std;

class Planet {
private:

    string planetName;
    string status;
    int relationship;

private:

    vector<Route*> neighbourPlanets;
    vector<Spaceships*> friendlyShips;
    int resources;
    bool discovered;
    bool habitable;



public:

    Planet(string name , int resources);
    void addNeighbour(Route* r);
    vector<Route*> getNeighbours();
    void addFriendlyShip(Spaceships* s);
    void removeFriendlyShip(Spaceships* s);
    void calculateRelationship();
    ////////////////////////////////////////
    ///// getters & setters
    ////////////////////////////////////////

    int getResources();
    bool isHabitable() const;
    void setHabitable(bool habitable);
    bool isDiscovered() const;
    void setDiscovered(bool discovered);
    const string &getPlanetName() const;
    const string &getStatus() const;
    void setStatus(const string &status);
    int getRelationship() const;



};


#endif //COS214_GP_PLANET_H
