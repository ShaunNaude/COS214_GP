#ifndef Crew_H
#define Crew_H
#include "ManningTheSpaceships/Engineer.h"
#include "ManningTheSpaceships/Doctor.h"
#include "ManningTheSpaceships/chiefEngineer.h"
#include "ManningTheSpaceships/Captain.h"
#include "ManningTheSpaceships/Navigator.h"
#include <vector>
#include <cmath>
using namespace std;


class Crew{
protected:
    vector<Engineer*> Engineers;
    chiefEngineer* chiefEng;
    Captain* captain;
    Navigator* navigator;
    Doctor* doc;
   
    

public:
    Crew(/* args */); 
    ~Crew();
    virtual int getAVGCrewWellBeing()=0;
    virtual void takeDamage();
    virtual void healAll()=0;
    int increaseEnergy();
    
};

#endif