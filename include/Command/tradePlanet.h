//
// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_TRADEPLANET_H
#define COS214_GP_TRADEPLANET_H


#include "Command.h"

class tradePlanet: public Command {
public:
    tradePlanet(Fleet* F);
    bool execute(int index) override;
};


#endif //COS214_GP_TRADEPLANET_H
