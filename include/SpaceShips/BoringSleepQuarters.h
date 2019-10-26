#ifndef BORINGSLEEPQUARTERS_H
#define BORINGSLEEPQUARTERS_H
#include "decorator.h"

/**
 * This class is a Concrete Decorator in the decorator design pattern.
 * This class is one of different sleep quarters that can be applied to the ship.
 * */

class BoringSleepQuarters:public decorator
{
private:
    
public:
    ///generic Constructor
    BoringSleepQuarters();
    ///generic Destructor
    ~BoringSleepQuarters();
    ///decorator Method
    void printComponent();
};

#endif