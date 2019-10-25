#ifndef Radio_H
#define Radio_H
#include <vector>
#include <string>
class Spaceships;
using namespace std;

/**
 *This class is a concrete Mediator in the mediator Design pattern.
 *This class is used to facilitate Communication between the spaceShips.
 **/

class Radio  
{
private:
    /**
     * This is a vector that holds all ships that are register on this ships frequency
     * This is essentially a colleagueList from the mediator design pattern
     * */
    vector<Spaceships*> ships;
public:
    ///generic Constructor
    Radio();
    /**
     * This method is used to add a ship to this radio's frequency
     * */
    void registerShip(Spaceships*);
    /**
     * This method is used to Broadcast a message to all spaceShips on the frequency.
     * */
    void announcement(string);
    /**
     * This method is called by the SpaceStation
     * This method will compile a report giving statistics/averages of all ships that are currently active.
     * */
    void getShipReports();
    ///generic Destructor
    ~Radio();
};

#endif