#ifndef BORINGBRIDGE_H
#define BORINGBRIDGE_H
#include "decorator.h"
class BoringBridge: public decorator

/**
 * This class is a Concrete Decorator in the decorator design pattern.
 * This class is one of different bridges that can be applied to the ship.
 * */

{
private:
    
public:
    ///generic Constructor
    BoringBridge(/* args */);
    ///generic Destructor
    ~BoringBridge();
    ///decorator Method
    void printComponent();
};

#endif