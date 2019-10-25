//
// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_ATTACKPLANET_H
#define COS214_GP_ATTACKPLANET_H


#include "Command.h"

class attackPlanet: public Command {


public:
    attackPlanet(Fleet* F);
    bool execute(int index) override;
};


#endif //COS214_GP_ATTACKPLANET_H
