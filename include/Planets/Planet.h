//
// Created by danienel21 on 2019/10/19.
//

#ifndef COS214_GP_PLANET_H
#define COS214_GP_PLANET_H

#include <vector>
#include <string>
class Spaceships;
class Route;
class Critter;

using namespace std;

class Planet {
private:

    string planetName;
    int relationship;
    int resources;

    vector<Critter*> crittersPlanet;
    vector<Spaceships*> friendlyShips;

protected:

    bool discovered;
    bool habitable;
    string status;
public:

    Planet(string name , int resources);
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
    string getPlanetName();
    const string &getStatus() const;
    void setStatus(const string &status);
    int getRelationship() const;
    const vector<Critter *> &getCrittersPlanet() const;




};


#endif //COS214_GP_PLANET_H
