#ifndef FANCYSLEEPQUARTERS_H
#define FANCYSLEEPQUARTERS_H
#include "decorator.h"

/**
 * This class is a Concrete Decorator in the decorator design pattern.
 * This class is one of different sleeping quarters that can be applied to the ship.
 * */

class FancySleepQuarters:public decorator
{
private:
   
public:
    ///generic Constructor
    FancySleepQuarters(/* args */);
    ///generic Destructor
    ~FancySleepQuarters();
    ///decorator function
    void printComponent();
};

#endif