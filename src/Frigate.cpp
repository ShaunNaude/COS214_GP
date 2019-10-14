#include "Frigate.h"
Frigate::Frigate(/* args */)
{
}

Frigate::~Frigate()
{
}
///getters
/**get the value of current displacement from spacstation*/
int Frigate::getDisplacement(){
    return Displacement;
}
/**get the value of the specific spaceships power*/
int Frigate::getPower(){
    return Power;
}
/**get the value of the specific spaceships thrust*/
int Frigate::getThrust(){
    return Thrust;
}
/**get the value of the specific spaceships top speed*/
int Frigate::getMax_speed(){
    return Max_speed;
}
/**get the value of the specific spaceships minimum speed*/
int Frigate::getStall_speed(){
    return Stall_speed;
}
/**get the value of the specific spaceships crew and passenger capacity*/
int Frigate::getCandP_Capacity(){
    return CandP_Capacity;
}
/**get the value of the specific spaceships energy*/
int Frigate::getEnergy(){
    return Energy;
}
///setters
/**set the specific spaceships current displaecment*/
void Frigate::setDisplacement(int input){
    Displacement = input;
}
/**set the specific spaceships current power*/
void Frigate::setPower(int input){

}
/**set the specific spaceships current thrust*/
void Frigate::setThrust(int input){

}
/**set the specific spaceships current top speed*/
void Frigate::setMax_speed(int input){

}
/**set the specific spaceships current minimum speed*/
void Frigate::setStall_speed(int input){

}
/**set the specific spaceships current crew and passenger capacity*/
void Frigate::setCandP_Capacity(int input){

}
/**set the specific spaceships current energy level(fuel)*/
void Frigate::setEnergy(int input){

}
///Other functions
/**this function is called when a spaceship travel and it reduces its energy level*/
void Frigate::DepleteEnergy(int input){
    Energy = Energy - input;
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Frigate::printComponent(){

}