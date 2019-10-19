
#ifndef COS214TASK6_3_PARSONCREATOR_H
#define COS214TASK6_3_PARSONCREATOR_H

#include "Person.h"

class PersonCreator
{
    protected:
       Person* Product;

    public:
        PersonCreator();
        virtual Person* Create() =0;
};

#endif //COS214TASK6_3_PARSONCREATOR_H
