#include "SpaceShips/Fighter.h"
/**This class is the template used to create an Fighter spaceships.
 * 
 * 
 */
Fighter::Fighter(/* args */)
{
}

Fighter::~Fighter()
{
}
///getters
/**get the value of current displacement from spacstation*/
int Fighter::getDisplacement(){
    return Displacement;
}
/**get the value of the specific spaceships power*/
int Fighter::getPower(){
    return Power;
}
/**get the value of the specific spaceships thrust*/
int Fighter::getThrust(){
    return Thrust;
}
/**get the value of the specific spaceships top speed*/
int Fighter::getMax_speed(){
    return Max_speed;
}
/**get the value of the specific spaceships minimum speed*/
int Fighter::getStall_speed(){
    return Stall_speed;
}
/**get the value of the specific spaceships crew and passenger capacity*/
int Fighter::getCandP_Capacity(){
    return CandP_Capacity;
}
/**get the value of the specific spaceships energy*/
int Fighter::getEnergy(){
    return Energy;
}
///setters
/**set the specific spaceships current displaecment*/
void Fighter::setDisplacement(int input){
    Displacement = input;
}
/**set the specific spaceships current power*/
void Fighter::setPower(int input){

}
/**set the specific spaceships current thrust*/
void Fighter::setThrust(int input){

}
/**set the specific spaceships current top speed*/
void Fighter::setMax_speed(int input){

}
/**set the specific spaceships current minimum speed*/
void Fighter::setStall_speed(int input){

}
/**set the specific spaceships current crew and passenger capacity*/
void Fighter::setCandP_Capacity(int input){

}
/**set the specific spaceships current energy level(fuel)*/
void Fighter::setEnergy(int input){

}
///Other functions
/**this function is called when a spaceship travel and it reduces its energy level*/
void Fighter::DepleteEnergy(int input){
    Energy = Energy - input;
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Fighter::printComponent(){

}