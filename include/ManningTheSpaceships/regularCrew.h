#ifndef regularCrew_H
#define regularCrew_H
#include "ManningTheSpaceships/Crew.h"


class regularCrew : public Crew{
private:
    /* data */
public:
    regularCrew(/* args */);
    ~regularCrew();
    int getAVGCrewWellBeing();
    void takeDamage();
     
};

#endif
