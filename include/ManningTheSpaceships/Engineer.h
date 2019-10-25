#ifndef Engineer_H
#define Engineer_H
#include "ManningTheSpaceships/Human.h"

/**
 * This class is derived from the Human class
 * This class is used to symbolize the Engineer
*/
class Engineer : public Human{
private:
    
public:
    ///generic Constructor
    Engineer(/* args */);
    ///generic Destructor
    ~Engineer();
    /**
     * This method is called when the average Energy of all ships is x<50
     * This message instructs the engineer to begin creating fuel so the ship is able to continue
     * The engineer can make between 1-25 units of fuel.
     * */
    int makefuel();
   
};

#endif