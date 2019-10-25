#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Spaceships.h"
#include <vector>
#include "ManningTheSpaceships/Commander.h"
using namespace std;
class SpaceStation: public Spaceships
{
private:
    string Announcements();
    
protected:
    string currentThreatLVL;
    vector<Spaceships*> VisitingSpaceships;
    Commander* commander;

public:
    ///functions
    SpaceStation(/* args */);
    ~SpaceStation();
    void increaseThreatLVL();
    void decreaseThreatLVL();
    void setThreatLVL(string);
    string getThreatLVL();
//-------Radio methods--------------------
    void receiveMsg(string);
    void makeDailyAnnouncement();
    void getStatus();


//----------------------------------------

    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
};
#endif