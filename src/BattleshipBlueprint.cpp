#include "BattleshipBlueprint.h"
BattleshipBlueprint::BattleshipBlueprint(/* args */)
{
}

BattleshipBlueprint::~BattleshipBlueprint()
{
}

Spaceships* BattleshipBlueprint::createSpaceship(){
    Battleship* battleship = new Battleship();
    return battleship;
}