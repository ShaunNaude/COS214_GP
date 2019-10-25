//
// Created by danienel21 on 2019/10/19.
//

#include <cstdlib>
#include "Critters/Critter.h"

int Critter::getHumanToleranceLevel() const {
    return humanToleranceLevel;
}

void Critter::setHumanToleranceLevel(int humanToleranceLevel) {
    Critter::humanToleranceLevel = humanToleranceLevel;
}

Critter::Critter() {

    humanToleranceLevel = rand() % 10 + 1;

}

Critter::~Critter()
{
    
}
