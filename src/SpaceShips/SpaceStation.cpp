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
///getters from spaceship
/**get the value of current displacement from spacstation*/
int SpaceStation::getDisplacement(){
    return Displacement;
}
/**get the value of the specific spaceships power*/
int SpaceStation::getPower(){
    return Power;
}
/**get the value of the specific spaceships thrust*/
int SpaceStation::getThrust(){
    return Thrust;
}
/**get the value of the specific spaceships top speed*/
int SpaceStation::getMax_speed(){
    return Max_speed;
}
/**get the value of the specific spaceships minimum speed*/
int SpaceStation::getStall_speed(){
    return Stall_speed;
}
/**get the value of the specific spaceships crew and passenger capacity*/
int SpaceStation::getCandP_Capacity(){
    return CandP_Capacity;
}
/**get the value of the specific spaceships energy*/
int SpaceStation::getEnergy(){
    return Energy;
}
///setters
/**set the specific spaceships current displaecment*/
void SpaceStation::setDisplacement(int input){
    Displacement = input;
}
/**set the specific spaceships current power*/
void SpaceStation::setPower(int input){

}
/**set the specific spaceships current thrust*/
void SpaceStation::setThrust(int input){

}
/**set the specific spaceships current top speed*/
void SpaceStation::setMax_speed(int input){

}
/**set the specific spaceships current minimum speed*/
void SpaceStation::setStall_speed(int input){

}
/**set the specific spaceships current crew and passenger capacity*/
void SpaceStation::setCandP_Capacity(int input){

}
/**set the specific spaceships current energy level(fuel)*/
void SpaceStation::setEnergy(int input){

}
///Other functions
/**this function is called when a spaceship travel and it reduces its energy level*/
void SpaceStation::DepleteEnergy(int input){
    Energy = Energy - input;
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void SpaceStation::printComponent(){

}