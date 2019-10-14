#include "Exploration_vessel.h"
/**This class is the template used to create an exploration vessel.
 * 
 * 
 */
///Exploration vessel constructor
Exploration_vessel::Exploration_vessel(/* args */)
{
    ///set initial stats on creation
    Displacement = 0;
    Power = 20;
    Thrust = 60;
    Max_speed = 4000;
    Stall_speed = 200;
    CandP_Capacity = 5;
    Energy = 1000;
}
///Exploration vessel destructor
Exploration_vessel::~Exploration_vessel()
{
}
///getters
/**get the value of current displacement from spacstation*/
int Exploration_vessel::getDisplacement(){
    return Displacement;
}
/**get the value of the specific spaceships power*/
int Exploration_vessel::getPower(){
    return Power;
}
/**get the value of the specific spaceships thrust*/
int Exploration_vessel::getThrust(){
    return Thrust;
}
/**get the value of the specific spaceships top speed*/
int Exploration_vessel::getMax_speed(){
    return Max_speed;
}
/**get the value of the specific spaceships minimum speed*/
int Exploration_vessel::getStall_speed(){
    return Stall_speed;
}
/**get the value of the specific spaceships crew and passenger capacity*/
int Exploration_vessel::getCandP_Capacity(){
    return CandP_Capacity;
}
/**get the value of the specific spaceships energy*/
int Exploration_vessel::getEnergy(){
    return Energy;
}
///setters
/**set the specific spaceships current displaecment*/
void Exploration_vessel::setDisplacement(int input){
    Displacement = input;
}
/**set the specific spaceships current power*/
void Exploration_vessel::setPower(int input){

}
/**set the specific spaceships current thrust*/
void Exploration_vessel::setThrust(int input){

}
/**set the specific spaceships current top speed*/
void Exploration_vessel::setMax_speed(int input){

}
/**set the specific spaceships current minimum speed*/
void Exploration_vessel::setStall_speed(int input){

}
/**set the specific spaceships current crew and passenger capacity*/
void Exploration_vessel::setCandP_Capacity(int input){

}
/**set the specific spaceships current energy level(fuel)*/
void Exploration_vessel::setEnergy(int input){

}
///Other functions
/**this function is called when a spaceship travel and it reduces its energy level*/
void Exploration_vessel::DepleteEnergy(int input){
    Energy = Energy - input;
}
///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void Exploration_vessel::printComponent(){

}