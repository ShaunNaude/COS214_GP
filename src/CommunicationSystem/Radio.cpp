#include "CommunicationSystem/Radio.h"
#include "SpaceShips/Spaceships.h"
#include "ManningTheSpaceships/Crew.h"
using namespace std;

Radio::Radio(/* args */) {
    
}

void Radio::registerShip(Spaceships* s) {
    ships.push_back(s);
    
}

void Radio::announcement(string str) {

    vector<Spaceships*>::iterator it;
    it = ships.begin();
    
    while((it != ships.end()))
    {
        (*it)->receiveMsg(str);
        it++;
    }


}

Radio::~Radio() {
    
}
