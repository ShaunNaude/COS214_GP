//
// Created by patric on 9/28/2019.
//

#ifndef COS214TASK6_3_ENGINEERS_H
#define COS214TASK6_3_ENGINEERS_H

#include "Person.h"

class Engineer: public Person
{
private:
    string ship;
    string Name;
    int WellBeing;
    string Duty;
    bool onDuty;
    bool injured;
public:

//Constructor and destructor
    Engineer(string inShip,string inName,int WellBeing,string Duty,bool onDuty);
    ~Engineer();

//Get and set Methods
    //G&S for ship
    string getShip();
    void setShip(string iIN);

    //G&S for name
    string getName();
    void setName(string iIN);

    //G&S for WellBeing
    int getWellBeing();
    void setWellBeing(int iIN);

    //G&S for Duty
    int getDuty();
    void setDuty(string iIN);

    //G&S for onDuty
    bool getonDuty();
    void setonDuty(bool iIN);

//Actions
    //General actions
    void speak();


};

#endif //COS214TASK6_3_ENGINEERS_H
