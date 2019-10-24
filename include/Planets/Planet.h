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


private:
    int threatLevel;

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
    void setRelationship(int num);
    void incRelationship();
    void decRelationship();
    int getRelationship();
    const vector<Critter *> &getCrittersPlanet() const;
    void addBasicCritters(int num);
    int getThreatLevel();
    void setResources(int resources);
    void addResources(int resources);
    void attackPlanet();

};


#endif //COS214_GP_PLANET_H
