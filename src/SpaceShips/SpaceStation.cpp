#include "SpaceShips/SpaceStation.h"
#include <iostream>
#include "CommunicationSystem/Radio.h"
using namespace std;

SpaceStation::SpaceStation(/* args */)
{
    this->commander = new Commander();
    type = "SpaceStation";
}

SpaceStation::~SpaceStation()
{
}
/**increase the threat level by one level*/
void SpaceStation::increaseThreatLVL(){
    if (currentThreatLVL == "Critical")
    {
        cout<<"Threat level already at Critical"<<endl;
    }else if (currentThreatLVL == "Substantial")
    {
        currentThreatLVL = "Critical";
        cout<< "Threat level increased to Critical"<<endl;
    }else if (currentThreatLVL == "Safe")
    {
        currentThreatLVL = "Substantial";
        cout<< "Threat level increased to Substantial"<<endl;
    }else
    {
        cout<< "Threat level is invalid"<<endl;
    }
}
/**increase the threat level by one level*/
void SpaceStation::decreaseThreatLVL(){
    if (currentThreatLVL == "Critical")
    {
        currentThreatLVL = "Substantial";
        cout<< "Threat level decreased"<<endl;
    }else if (currentThreatLVL == "Substantial")
    {
        currentThreatLVL = "Safe";
        cout<< "Threat level decreased"<<endl;
    }else if (currentThreatLVL == "Safe")
    {
        cout<< "Threat level is already at safe"<<endl;
    }else
    {
        cout<< "Threat level is invalid"<<endl;
    }   
}
///setters for spacestation
/**set threat level to a specific level*/
void SpaceStation::setThreatLVL(string input){
    if (input=="Safe"||input=="Substantial"||input=="Critical"){
        currentThreatLVL = input;
        return;
    }else{
        cout<<"Invalid threat level given"<<endl;
    }
}
///getters for spacestation
string SpaceStation::getThreatLVL(){
    cout<< currentThreatLVL;
}

///Decorator function
/**this function shows what type of bridge and sleeping quarters are used in the concrete decorator*/
void SpaceStation::printComponent(){

}

void SpaceStation::makeDailyAnnouncement()
{
        string message = this->Announcements();
       radio->announcement(message);
}

void SpaceStation::receiveMsg(string msg)
{

}

string SpaceStation::Announcements()
{
    srand(time(0));
    int iRand = (rand() % 5) + 1;

        switch(iRand) {
      case 1 :
        return "yay! its the Commanders Birthday, everybody gets a free beer!" ;
         break;
      case 2 :
            return "The Annual spacestaion ball is coming up, Dont forget to buy your ticket!";
            break;
      case 3 :
         return  "Remeber your mental and physical well-being is of utmost importance!" ;
         break;
      case 4 :
         return  "Its Engineers appreciation day, give your Engineers a high-five !"; 
         break;
      case 5 :
         return  "Work hard play harder, dont forget to checkout the new Crew-relaxation area on your ship!"; 
         break;
 
   }

}

void SpaceStation::getStatus()
{
    this->radio->getShipReports();
}