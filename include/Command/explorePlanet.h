//
// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_EXPLOREPLANET_H
#define COS214_GP_EXPLOREPLANET_H


#include "Command.h"

class explorePlanet: public Command {
public:
    explorePlanet(Fleet* F);
    bool execute(int index) override;
};


#endif //COS214_GP_EXPLOREPLANET_H
