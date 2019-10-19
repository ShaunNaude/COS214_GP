#ifndef COS214TASK6_3_CAPTAINCREATOR_H
#define COS214TASK6_3_CAPTAINCREATOR_H

#include "Person.h"

class CaptainCreator: public Person
{
    CaptainCreator();

    Person* Create();

};

#endif //COS214TASK6_3_CAPTAINCREATOR_H
