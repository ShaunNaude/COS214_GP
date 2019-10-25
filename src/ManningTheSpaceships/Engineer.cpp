#include "ManningTheSpaceships/Engineer.h"


Engineer::Engineer(/* args */) {
    
}

Engineer::~Engineer() {
    
}

int Engineer::makefuel()
{
    srand(time(0));
    int fuel = (rand() % 15) + 1;

    return fuel;

}
