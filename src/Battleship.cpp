#include "Battleship.h"

Battleship::Battleship(/* args */)
{
}

Battleship::~Battleship()
{
}
///getters
/**get the value of current displacement from spacstation*/
int Battleship::getDisplacement(){
    return Displacement;
}
/**get the value of the specific spaceships power*/
int Battleship::getPower(){
    return Power;
}
/**get the value of the specific spaceships thrust*/
int Battleship::getThrust(){
    return Thrust;
}
/**get the value of the specific spaceships top speed*/
int Battleship::getMax_speed(){
    return Max_speed;
}
/**get the value of the specific spaceships minimum speed*/
int Battleship::getStall_speed(){
    return Stall_speed;
}
/**get the value of the specific spaceships crew and passenger capacity*/
int Battleship::getCandP_Capacity(){
    return CandP_Capacity;
}
/**get the value of the specific spaceships energy*/
int Battleship::getEnergy(){
    return Energy;
}
///setters
/**set the specific spaceships current displaecment*/
void Battleship::setDisplacement(int input){
    Displacement = input;
}
/**set the specific spaceships current power*/
void Battleship::setPower(int input){

}
/**set the specific spaceships current thrust*/
void Battleship::setThrust(int input){

}
/**set the specific spaceships current top speed*/
void Battleship::setMax_speed(int input){

}
/**set the specific spaceships current minimum speed*/
void Battleship::setStall_speed(int input){

}
/**set the specific spaceships current crew and passenger capacity*/
void Battleship::setCandP_Capacity(int input){

}
/**set the specific spaceships current energy level(fuel)*/
void Battleship::setEnergy(int input){

}
///Other functions
/**this function is called when a spaceship travel and it reduces its energy level*/
void Battleship::DepleteEnergy(int input){
    Energy = Energy - input;
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Battleship::printComponent(){

}