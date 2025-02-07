#include "ManningTheSpaceships/crewFactory.h"
#include "ManningTheSpaceships/regularCrewFactory.h"
#include "ManningTheSpaceships/regularCrew.h"
#include "ManningTheSpaceships/Crew.h"
#include "ManningTheSpaceships/combatCrewFactory.h"
#include "ManningTheSpaceships/combatCrew.h"
#include "SpaceShips/Battleship.h"
#include "SpaceShips/BattleshipBlueprint.h"
#include "SpaceShips/BoringBridge.h"
#include "SpaceShips/BoringSickBay.h"
#include "SpaceShips/BoringSleepQuarters.h"
#include <iostream>
#include <Fleet/Fleet.h>
#include <SpaceShips/FighterBlueprint.h>
#include <Command/Command.h>
#include <Command/attackPlanet.h>
#include <Command/Button.h>
#include <Command/tradePlanet.h>
#include <Command/explorePlanet.h>
#include <Command/moveFleetToPlanet.h>
#include <unistd.h>

using namespace std;


int indexOption =-1;
int indexPlanet =-1;
int day = 0;
char c;

Fleet* ImperialFleet = Fleet::Instance();

Command* attack = new attackPlanet(ImperialFleet);
Command* trade = new tradePlanet(ImperialFleet);
Command* explore = new explorePlanet(ImperialFleet);
Command* moveFleet = new moveFleetToPlanet(ImperialFleet);

Button* btnAttack = new Button(attack);
Button* btnTrade = new Button(trade);
Button* btnExplore = new Button(explore);
Button* btnMove = new Button(moveFleet);



void ClearScreen()
{
    int n;
    for (n = 0; n < 50; n++)
        cout<<endl;
}


void dailyOptions(){
    cout<<"//////////////////////////////////"<<endl;
    cout<<"What would you like to do today ? "<<endl;
    cout<<"///////////////////////////////////"<<endl;
    cout<<"0-Attack (Developers choice)"<< endl;
    cout<<"1-Trade (Developers dissaprove)"<<endl;
    cout<<"2-Explore"<<endl;
    cout<<"3-Move"<<endl;
    cout<<"4-Status"<<endl;
    cout<<"///////////////////////////////////"<<endl;
    cout<<"choose your option"<<endl;
    cout<<"////////////////////////////////////"<<endl;

    cout<<"Enter option:";
    cin>>indexOption;

    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Incorrect input please try again"<<endl;
        cout<<"Enter option:   "<<endl;
        cin>>indexOption;
    }


}

void choosePlanet(){
    ImperialFleet->summarisedListPlanets();
    cout<<"Choose planet: ";
    cin>>indexPlanet;
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Incorrect input please try again"<<endl;
        cout<<"Enter planet:    "<<endl;
        cin>>indexOption;
    }

}

void end(){
    cout<<"//////////////////////////////////////"<<endl;
    cout<<"YOU HAVE CONQUERED ALL THE PLANETS "<<endl;
    cout<<"HUMANITY REIGNS"<<endl;
    cout<<"//////////////////////////////////////"<<endl;
}

void showDay(){
    day++;

    cout<<"THE FLEET IS CURRENTLY ON DAY "<<day<<endl;

}

void Continue(){
    cout<<"Input C to continue"<<endl;
    cin>>c;
    while(c!='C'){
        cout<<"Wrong Input"<<endl;
        cout<<"Input C to continue"<<endl;
        cin>>c;
    }
    sleep(1);

}


using namespace std;
int main(){

    while(!ImperialFleet->isTotalDomination()){
        ClearScreen();

        showDay();

        ImperialFleet->fleetInfo();
        ImperialFleet->station->getStatus();

        Continue();

        ClearScreen();
        ImperialFleet->listPlanets();

        Continue();

        dailyOptions();
        choosePlanet();

        switch(indexOption){
            case 0:
                if(!btnAttack->press(indexPlanet)){}
                break;
            case 1:
                if(!btnTrade->press(indexPlanet)){}
                break;
            case 2:
                if(!btnExplore->press(indexPlanet)){}
                break;
            case 3:
                if(!btnMove->press(indexPlanet)){}
                break;
            case 4:
                ImperialFleet->station->getStatus();
        }


        ImperialFleet->sustain();

        Continue();
    }

    end();
    return 0;
}