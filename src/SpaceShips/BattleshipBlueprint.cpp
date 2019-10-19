#include "SpaceShips/BattleshipBlueprint.h"

BattleshipBlueprint::BattleshipBlueprint(/* args */)
{
}

BattleshipBlueprint::~BattleshipBlueprint()
{
}

Spaceships* BattleshipBlueprint::createSpaceship(){
    Spaceships* battleship = new Battleship();
    return battleship;
}