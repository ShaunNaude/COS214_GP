#ifndef SPACESHIPS_H
#define SPACESHIPS_H
#include <string>



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


    //string bridge;
    //string sick_bay;
    //string sleeping_quarters;



    
public:
    string type;
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
    ///setters
    void setDisplacement(int displacement);
    void setPower(int power);
    void setThrust(int thrust);

    void setCandPCapacity(int candPCapacity);
    void setEnergy(int energy);
    void setStallSpeed(int stallSpeed);
    void setMaxSpeed(int maxSpeed);

    ///Other functions
    void DepleteEnergy(int amountLost);
    ///Decorator function
    virtual void printComponent() = 0;

  /*  virtual int getDisplacement() = 0;
    virtual int getPower() = 0;
    virtual int getThrust() = 0;
    virtual int getMax_speed() = 0;
    virtual int getStall_speed() = 0;
    virtual int getCandP_Capacity() = 0;
    virtual int getEnergy() = 0;

   virtual void setDisplacement(int) = 0;
    virtual void setPower(int) = 0;
    virtual void setThrust(int) = 0;
    virtual void setMax_speed(int) = 0;
    virtual void setStall_speed(int) = 0;
    virtual void setCandP_Capacity(int) = 0;
    virtual void setEnergy(int) = 0; */

};

#endif