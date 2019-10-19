#ifndef COS214TASK6_3_FIGHTERCREATOR_H
#define COS214TASK6_3_FIGHTERCREATOR_H

#include "Person.h"
class FighterCreator: public Person
{
    FighterCreator();

    Person* Create();
};

#endif //COS214TASK6_3_FIGHTERCREATOR_H
