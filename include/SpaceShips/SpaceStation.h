#ifndef SPACESTATION_H
#define SPACESTATION_H
#include "Spaceships.h"
#include <vector>
#include "ManningTheSpaceships/Commander.h"
using namespace std;

/**
 * This class is a signleton in the singleton design pattern.
 * This class is derived from the spaceships base class.
 * */

class SpaceStation: public Spaceships
{
private:
    ///This private method has all the possible announcements that the spaceship could broadcast
    string Announcements();
    
protected:
    ///Name of the threat level
    string currentThreatLVL;
    ///Vector of all spaceships visiting spacestations
    vector<Spaceships*> VisitingSpaceships;
    ///reference to the commander of the spacestation
    Commander* commander;

public:
    ///generic Constructor
    SpaceStation();
    ///generic Destructor
    ~SpaceStation();
    ///set method
    void increaseThreatLVL();
    ///set method
    void decreaseThreatLVL();
    ///set method
    void setThreatLVL(string);
    string getThreatLVL();
    ///Method to receive message
    void receiveMsg(string);
    ///method to broadcast announcements
    void makeDailyAnnouncement();
    ///method to generate report
    void getStatus();
    ///method to deplete energy as the spaceships travels
    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
};
#endif