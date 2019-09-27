#ifndef SPACESHIPS_H
#define SPACESHIPS_H
#include <string>

using namespace std;
///This class acts as the abstract class from which all the space ships inherit functionality
class Spaceships
{
protected:
    ///Variables
    int Displacement;
    int Power;
    int Thrust;
    int Max_speed;
    int Stall_speed;
    int CandP_Capacity;
    int Energy;
    //string bridge;
    //string sick_bay;
    //string sleeping_quarters;
private:
    
public:
    Spaceships(/* args */);
    ~Spaceships();
    ///getters
    virtual int getDisplacement() = 0;
    virtual int getPower() = 0;
    virtual int getThrust() = 0;
    virtual int getMax_speed() = 0;
    virtual int getStall_speed() = 0;
    virtual int getCandP_Capacity() = 0;
    virtual int getEnergy() = 0;
    ///setters
    virtual void setDisplacement(int) = 0;
    virtual void setPower(int) = 0;
    virtual void setThrust(int) = 0;
    virtual void setMax_speed(int) = 0;
    virtual void setStall_speed(int) = 0;
    virtual void setCandP_Capacity(int) = 0;
    virtual void setEnergy(int) = 0;
    ///Other functions
    void DepleteEnergy(int);
    ///Decorator function
    virtual void printComponent() = 0;
};

#endif