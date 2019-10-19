#ifndef Human_H
#define Human_H
#include <string>
using namespace std;

///this human abstraction
class Human
{
private:
    string Name;
    int WellBeing; // this represents physical/mental health */100
    bool injured;
    int rank;
    bool onDuty;
public:
    Human();
    ~Human();

    //Get and set Methods
//======================================
     string getName();
     void setName(string);

    
     int getWellBeing();
     void setWellBeing(int);

     bool getDuty();
     void setDuty(bool);

     int getRank();
     void setRank(int);
//======================================

    //functionality
//======================================
    void receiveTreatment();


};

#endif 
