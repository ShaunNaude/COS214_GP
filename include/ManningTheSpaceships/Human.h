#ifndef Human_H
#define Human_H
#include <string>
using namespace std;

/**
 * This class is an Abstraction of every Human.
*/

class Human
{
private:
    ///Human Name Variable.
    string Name;
    ///variable to indicate Well-being */100.
    int WellBeing;
    ///Variable to indicate Human Rank */10.
    int rank;
    ///Variable to indicate if the Human is on duty.
    bool onDuty;

public:
    ///generic Constructor
    Human();
    ///generic destructor
    ~Human();

     ///generic get method
     string getName();
     ///generic set method
     void setName(string);

     ///generic get method
     int getWellBeing();
     ///generic set method
     void setWellBeing(int);

     ///generic get method
     bool getDuty();
     ///generic set method
     void setDuty(bool);

     ///generic get method
     int getRank();
     ///generic set method
     void setRank(int);
     
    /**
     * Every Human will have the option to receive treatment from a Doctor if needed.
     * Once this method is called the Human is restored to 100% well being.
     * */
    void receiveTreatment();


};

#endif 
