#include "SpaceShips/Transporter.h"
Transporter::Transporter(/* args */)
{
}

Transporter::~Transporter()
{
}
///getters
/**get the value of current displacement from spacstation*/
int Transporter::getDisplacement(){
    return Displacement;
}
/**get the value of the specific spaceships power*/
int Transporter::getPower(){
    return Power;
}
/**get the value of the specific spaceships thrust*/
int Transporter::getThrust(){
    return Thrust;
}
/**get the value of the specific spaceships top speed*/
int Transporter::getMax_speed(){
    return Max_speed;
}
/**get the value of the specific spaceships minimum speed*/
int Transporter::getStall_speed(){
    return Stall_speed;
}
/**get the value of the specific spaceships crew and passenger capacity*/
int Transporter::getCandP_Capacity(){
    return CandP_Capacity;
}
/**get the value of the specific spaceships energy*/
int Transporter::getEnergy(){
    return Energy;
}
///setters
/**set the specific spaceships current displaecment*/
void Transporter::setDisplacement(int input){
    Displacement = input;
}
/**set the specific spaceships current power*/
void Transporter::setPower(int input){

}
/**set the specific spaceships current thrust*/
void Transporter::setThrust(int input){

}
/**set the specific spaceships current top speed*/
void Transporter::setMax_speed(int input){

}
/**set the specific spaceships current minimum speed*/
void Transporter::setStall_speed(int input){

}
/**set the specific spaceships current crew and passenger capacity*/
void Transporter::setCandP_Capacity(int input){

}
/**set the specific spaceships current energy level(fuel)*/
void Transporter::setEnergy(int input){

}
///Other functions
/**this function is called when a spaceship travel and it reduces its energy level*/
void Transporter::DepleteEnergy(int input){
    Energy = Energy - input;
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Transporter::printComponent(){

}