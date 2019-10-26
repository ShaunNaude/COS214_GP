#ifndef BORINGSICKBAY_H
#define BORINGSICKBAY_H
#include "decorator.h"

/**
 * This class is a Concrete Decorator in the decorator design pattern.
 * This class is one of different Sick bays that can be applied to the ship.
 * */

class BoringSickBay:public decorator
{
private:
    
public:
    ///generic Constructor
    BoringSickBay();
    ///generic Destructor
    ~BoringSickBay();
    ///decorator Method
    void printComponent();
};

#endif