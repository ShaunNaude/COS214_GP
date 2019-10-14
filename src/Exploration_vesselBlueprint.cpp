#include "Exploration_vesselBlueprint.h"

Exploration_vesselBlueprint::Exploration_vesselBlueprint(/* args */)
{
}

Exploration_vesselBlueprint::~Exploration_vesselBlueprint()
{
}

Spaceships* Exploration_vesselBlueprint::createSpaceship(){
    Spaceships* explorer = new Exploration_vessel();
    return explorer;
}