//
// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_MOVEFLEETTOPLANET_H
#define COS214_GP_MOVEFLEETTOPLANET_H


#include "Command.h"

class moveFleetToPlanet: public Command {
public:
    moveFleetToPlanet(Fleet* F);
    bool execute(int index) override;
};


#endif //COS214_GP_MOVEFLEETTOPLANET_H
