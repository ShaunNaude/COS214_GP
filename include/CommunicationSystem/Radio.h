#ifndef Radio_H
#define Radio_H
#include <vector>
#include <string>
class Spaceships;
using namespace std;


//this is a mediator
class Radio  
{
private:
    vector<Spaceships*> ships;
public:
    Radio(/* args */);
    void registerShip(Spaceships*);
    void announcement(string);
    void getShipReports();
    ~Radio();
};

#endif