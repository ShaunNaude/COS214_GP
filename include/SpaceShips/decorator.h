#ifndef DECORATOR_H
#define DECORATOR_H
#include "Spaceships.h"
#include <iostream>
using namespace std;

class decorator: public Spaceships
{
private:
    Spaceships* decoratedship;
public:
    virtual void printComponent();
    decorator(/* args */);
    ~decorator();
};

#endif