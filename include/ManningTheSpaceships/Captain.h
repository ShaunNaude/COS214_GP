//
// Created by patric on 9/28/2019.
//

#ifndef COS214TASK6_3_CAPTAIN_H
#define COS214TASK6_3_CAPTAIN_H

#include "Person.h"

class Captain: public Person
{
private:

public:

//Constructor and destructor
    Captain(string inShip,string inName,int WellBeing,string Duty,bool onDuty);
    ~Captain();

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
    void DirectNagigator();
    void FireCrewMember(Person*);
    void RequestNewMember(Person*);

};


#endif //COS214TASK6_3_CAPTAIN_H
