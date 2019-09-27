#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Spaceships.h"
#include <vector>
using namespace std;
class SpaceStation: public Spaceships
{
private:
    
protected:
    string currentThreatLVL;
    vector<Spaceships*> VisitingSpaceships;
public:
    ///functions
    SpaceStation(/* args */);
    ~SpaceStation();
    void increaseThreatLVL();
    void decreaseThreatLVL();
    ///setters
    void setThreatLVL(string);
    ///getters
    string getThreatLVL();
};
#endif