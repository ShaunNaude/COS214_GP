#ifndef COS214TASK6_3_DOCTORCREATOR_H
#define COS214TASK6_3_DOCTORCREATOR_H

#include "Person.h"
class DoctorCreator: public Person
{
    DoctorCreator();

    Person* Create();
};


#endif //COS214TASK6_3_DOCTORCREATOR_H
