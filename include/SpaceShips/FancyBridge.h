#ifndef FANCYBRIDGE_H
#define FANCYBRIDGE_H
#include "decorator.h"

/**
 * This class is a Concrete Decorator in the decorator design pattern.
 * This class is one of different bridges that can be applied to the ship.
 * */

class FancyBridge: public decorator
{
private:
    
public:
    ///generic Constructor
    FancyBridge();
    ///generic Destructor
    ~FancyBridge();
    ///decorator function
    void printComponent();
};

#endif