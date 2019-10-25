#ifndef COS214_GP_ATTACKPLANET_H
#define COS214_GP_ATTACKPLANET_H
#include "Command.h"

/**
 * This class is a Concrete Command in the Command design pattern.
 * */

class attackPlanet: public Command {

public:
    /**
     * The attackPlanet class constructor takes a Fleet* as a parameter.
     * The reason for the parameter is to initailse the receiver variable.
     * */
    attackPlanet(Fleet* F);
    ///This is the implementation of the pure virtual function created in the base class.
    bool execute(int index) override;

};

#endif //COS214_GP_ATTACKPLANET_H
