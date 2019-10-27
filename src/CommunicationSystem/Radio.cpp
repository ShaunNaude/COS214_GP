#include "CommunicationSystem/Radio.h"
#include "SpaceShips/Spaceships.h"
#include "ManningTheSpaceships/Crew.h"
using namespace std;

Radio::Radio(/* args */) {
    
}

void Radio::registerShip(Spaceships* s) {
    ships.push_back(s);
    
}

void Radio::announcement(string str) {

    vector<Spaceships*>::iterator it;
    it = ships.begin();
    
    while((it != ships.end()))
    {
        (*it)->receiveMsg(str);
        it++;
    }


}

Radio::~Radio() {
    
}

void Radio::getShipReports(){

    vector<Spaceships*>::iterator it;
    it = ships.begin();
    float avgEnergy=0;
    float avgWellbeing=0;
    int count=0;
    
    while((it != ships.end()))
    {
        if( (*it)->type != "SpaceStation") 
        {
            avgEnergy = avgEnergy +(*it)->getEnergy();
            avgWellbeing = avgWellbeing + (*it)->getCrew()->getAVGCrewWellBeing(); 
            count++;
        }

        it++;
    }

    avgWellbeing = (avgWellbeing/count);
    avgEnergy = (avgEnergy/count);


    cout<<"--------------------------------------------------"<<endl;
    cout<<"|"<<"STATUS OF ALL SHIPS                             |"<<endl;
    cout<<"|"<<"-------------------                             |"<<endl;
    cout<<"|"<<"                                                |"<<endl;
    cout<<"|"<<" ->Average Energy: "<<trunc(avgEnergy)<<"                           |"<<endl;
    cout<<"|"<<" ->Average well-being: "<<trunc(avgWellbeing)<<"                       |"<<endl;
    cout<<"--------------------------------------------------"<<endl;

    it = ships.begin();
    if(avgWellbeing<50)
    {
        cout<<" "<<endl;
        cout<<"Well-being is low, Doctors are being Notified of the problem"<<endl;
        while((it != ships.end()))
    {
        if( (*it)->type != "SpaceStation") 
        {
            (*it)->getCrew()->healAll();
        }

        it++;
    }
    }
    it = ships.begin();
    if(avgEnergy<50)
    {
        cout<<" "<<endl;
        cout<<"Energy is low, Engineers are being Notified to make more fuel!"<<endl;
        while((it != ships.end()))
    {
        if( (*it)->type != "SpaceStation") 
        {
            (*it)->setEnergy( (*it)->getCrew()->increaseEnergy() + (*it)->getEnergy() );

            if((*it)->getEnergy()>100)
            {
                (*it)->setEnergy(99);
            }


        }

        it++;
    }



    }




}
