#ifndef COS214_GP_EXPLOREPLANET_H
#define COS214_GP_EXPLOREPLANET_H
#include "Command.h"

/**
 * This class is a Concrete Command in the Command design pattern.
 **/

class explorePlanet: public Command {

public:
     /**
     * The explorePlant class constructor takes a Fleet* as a parameter.
     * The reason for the parameter is to initailse the receiver variable
     * */
    explorePlanet(Fleet* F);
    ///This is the implementation of the pure virtual function created in the base class.
    bool execute(int index) override;

};

#endif 
