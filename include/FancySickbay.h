#ifndef FANCYSICKBAY_H
#define FANCYSICKBAY_H
#include "decorator.h"
class FancySickbay:public decorator
{
private:
    /* data */
public:
    FancySickbay(/* args */);
    ~FancySickbay();
    void printComponent();
};

#endif