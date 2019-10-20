#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include "Spaceships.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"
class Transporter:public Spaceships
{
private:
   regularCrew* transporterCrew;
public:
    Transporter(/* args */);
    ~Transporter();
   /* ///getters
    int getDisplacement();
    int getPower();
    int getThrust();
    int getMax_speed();
    int getStall_speed();
    int getCandP_Capacity();
    int getEnergy();
    ///setters
    void setDisplacement(int);
    void setPower(int);
    void setThrust(int);
    void setMax_speed(int);
    void setStall_speed(int);
    void setCandP_Capacity(int);
    void setEnergy(int); */
    ///Other functions
    void DepleteEnergy(int);
    ///Decorator function
    void printComponent();
};

#endif