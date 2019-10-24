#ifndef SPACESHIPS_H
#define SPACESHIPS_H
#include <string>
class Radio;
#include <iostream>
using namespace std;
///This class acts as the abstract class from which all the space ships inherit functionality
class Spaceships
{
private:
    ///Variables
    int Displacement;
    int Power;
    int Thrust;
    int Max_speed;
    int Stall_speed;
    int CandP_Capacity;
    int Energy;
    Spaceships* bridge;
    Spaceships* sick_bay;
    Spaceships* sleeping_quarters;
protected:
  Radio* radio;


public:
    string type;
    string ID;
    Spaceships(/* args */);
    ~Spaceships();

    ///getters
    int getDisplacement() const;
    int getPower() const;
    int getThrust() const;
    int getCandPCapacity() const;
    int getEnergy() const;
    int getStallSpeed() const;
    int getMaxSpeed() const;
     Spaceships* getBridge();
    Spaceships* getSick();
    Spaceships* getSleep();
    ///setters
    void setDisplacement(int displacement);
    void setPower(int power);
    void setThrust(int thrust);
//-------------------------------------------------
    //radio code
    void setRadio(Radio*);
    void sendMsg(string,string);
   virtual void receiveMsg(string); //the spaceships and spacestation will implement this method in different ways


//--------------------------------------------------
    void setCandPCapacity(int candPCapacity);
    void setEnergy(int energy);
    void setStallSpeed(int stallSpeed);
    void setMaxSpeed(int maxSpeed);

    ///Other functions
    void DepleteEnergy(int amountLost);
    ///Decorator function
    virtual void printComponent() = 0;
    virtual void addr(Spaceships*,Spaceships*,Spaceships*);



};

#endif