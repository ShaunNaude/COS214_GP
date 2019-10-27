#ifndef DECORATOR_H
#define DECORATOR_H
#include "Spaceships.h"
#include <iostream>
using namespace std;

/**
 * This class is the decorator in the decorator design pattern.
 * */

class decorator: public Spaceships
{
private:
    ///refrence to the spaceship being decorated 
    Spaceships* decoratedship;
public:
    ///fucntion to print 
    virtual void printComponent();
    ///generic Constructor
    decorator(/* args */);
    ///generic Destructor
    ~decorator();
};

#endif