#include "SpaceShips/Spaceships.h"
#include "CommunicationSystem/Radio.h"

Spaceships::Spaceships(/* args */)
{
    setEnergy(100);
    
}

Spaceships::~Spaceships()
{
}

int Spaceships::getDisplacement() const {
    return Displacement;
}

void Spaceships::setDisplacement(int displacement) {
    Displacement = displacement;
}

int Spaceships::getPower() const {
    return Power;
}

void Spaceships::setPower(int power) {
    Power = power;
}

int Spaceships::getThrust() const {
    return Thrust;
}

void Spaceships::setThrust(int thrust) {
    Thrust = thrust;
}

int Spaceships::getMaxSpeed() const {
    return Max_speed;
}

void Spaceships::setMaxSpeed(int maxSpeed) {
    Max_speed = maxSpeed;
}

int Spaceships::getStallSpeed() const {
    return Stall_speed;
}

void Spaceships::setStallSpeed(int stallSpeed) {
    Stall_speed = stallSpeed;
}

int Spaceships::getCandPCapacity() const {
    return CandP_Capacity;
}

void Spaceships::setCandPCapacity(int candPCapacity) {
    CandP_Capacity = candPCapacity;
}

int Spaceships::getEnergy() const {
    return Energy;
}

void Spaceships::setEnergy(int energy) {
    Energy = energy;
}
///Other functions
void Spaceships::DepleteEnergy(int amountLost) {

    Energy -= amountLost;

}

void Spaceships::addr(Spaceships* shipBridge,Spaceships* shipSick_bay,Spaceships* shipSleeping_quarters){
    bridge = shipBridge;
    sick_bay = shipSick_bay;
    sleeping_quarters = shipSleeping_quarters;
}

Spaceships* Spaceships::getBridge(){
    return bridge;
}

Spaceships* Spaceships::getSick(){
    return sick_bay;
}

Spaceships* Spaceships::getSleep(){
    return sleeping_quarters;
}




///Decorator function
//void printComponent(){}

void Spaceships::setRadio(Radio* r)
{
    this->radio = r;
}

void  Spaceships::sendMsg(string type, string msg)
{
        
}

void Spaceships::receiveMsg(string Msg)
{
    cout<<this->type<<" received Message : "<<Msg<<endl;
}


/* ///getters
int getDisplacement(){}
int getPower(){}
int getThrust(){}
int getMax_speed(){}
int getStall_speed(){}
int getCandP_Capacity(){}
int getEnergy(){}
///setters
void setDisplacement(int){}
void setPower(int){}
void setThrust(int){}
void setMax_speed(int){}
void setStall_speed(int){}
void setCandP_Capacity(int){}
void setEnergy(int){}*/
