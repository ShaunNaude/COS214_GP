#ifndef COS214TASK6_3_NAVIGATORCREATOR_H
#define COS214TASK6_3_NAVIGATORCREATOR_H

#include "Person.h"
class NavigatorCreator: public Person
{
    NavigatorCreator();

    Person* Create();
};

#endif //COS214TASK6_3_NAVIGATORCREATOR_H
