#include "Exploration_vesselBlueprint.h"
Exploration_vesselBlueprint::Exploration_vesselBlueprint(/* args */)
{
}

Exploration_vesselBlueprint::~Exploration_vesselBlueprint()
{
}

Spaceships* Exploration_vesselBlueprint::createSpaceship(){
    Exploration_vessel* explorer = new Exploration_vessel();
    return explorer;
}