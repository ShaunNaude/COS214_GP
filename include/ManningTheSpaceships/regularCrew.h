#ifndef regularCrew_H
#define regularCrew_H
#include "ManningTheSpaceships/Crew.h"

/**
 * This class is a Concrete Product in the abstract factory design pattern
 * This class is derived from the Crew base class
 * */

class regularCrew : public Crew{
private:
    
public:
    ///generic Constructor
    regularCrew();
    ///generic Destructor
    ~regularCrew();
    ///implementation of inherited fucntion
    int getAVGCrewWellBeing();
    ///implementation of inherited fucntion
    void takeDamage();
    ///implementation of inherited fucntion
    void healAll();
     
};

#endif
