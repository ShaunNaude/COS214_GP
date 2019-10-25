#ifndef COS214_GP_TRADEPLANET_H
#define COS214_GP_TRADEPLANET_H

#include "Command.h"

/**
 * This class is a Concrete Command in the Command design pattern.
 **/

class tradePlanet: public Command {

public:
    /**
     * The tradePlant class constructor takes a Fleet* as a parameter.
     * The reason for the parameter is to initailse the receiver variable
     * */
    tradePlanet(Fleet* F);
    ///This is the implementation of the pure virtual function created in the base class.
    bool execute(int index) override;
};

#endif 
