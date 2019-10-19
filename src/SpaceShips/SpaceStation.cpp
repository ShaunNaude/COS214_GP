#include "SpaceShips/SpaceStation.h"
#include <iostream>;
using namespace std;

SpaceStation::SpaceStation(/* args */)
{
}

SpaceStation::~SpaceStation()
{
}
/**increase the threat level by one level*/
void SpaceStation::increaseThreatLVL(){
    if (currentThreatLVL == "Critical")
    {
        cout<<"Threat level already at Critical"<<endl;
    }else if (currentThreatLVL == "Substantial")
    {
        currentThreatLVL = "Critical";
        cout<<"Threat level increased to Critical"<<endl;
    }else if (currentThreatLVL == "Safe")
    {
        currentThreatLVL = "Substantial";
        cout<<"Threat level increased to Substantial"<<endl;
    }else
    {
        cout<<"Threat level is invalid"<<endl;
    }
}
/**increase the threat level by one level*/
void SpaceStation::decreaseThreatLVL(){
    if (currentThreatLVL == "Critical")
    {
        currentThreatLVL = "Substantial";
        cout<<"Threat level decreased"<<endl;
    }else if (currentThreatLVL == "Substantial")
    {
        currentThreatLVL = "Safe";
        cout<<"Threat level decreased"<<endl;
    }else if (currentThreatLVL == "Safe")
    {
        cout<<"Threat level is already at safe"<<endl;
    }else
    {
        cout<<"Threat level is invalid"<<endl;
    }   
}
///setters for spacestation
/**set threat level to a specific level*/
void SpaceStation::setThreatLVL(string input){
    if (input=="Safe"||input=="Substantial"||input=="Critical"){
        currentThreatLVL = input;
        return;
    }else{
        cout<<"Invalid threat level given"<<endl;
    }
}
///getters for spacestation
string SpaceStation::getThreatLVL(){
    return currentThreatLVL;
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void SpaceStation::printComponent(){

}