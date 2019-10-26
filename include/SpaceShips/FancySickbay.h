#ifndef FANCYSICKBAY_H
#define FANCYSICKBAY_H
#include "decorator.h"

/**
 * This class is a Concrete Decorator in the decorator design pattern.
 * This class is one of different sick bays that can be applied to the ship.
 * */

class FancySickbay:public decorator
{
private:
    
public:
    ///generic Constructor
    FancySickbay();
    ///generic Destructor
    ~FancySickbay();
    ///decorator function
    void printComponent();
};

#endif