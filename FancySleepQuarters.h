#ifndef FANCYSLEEPQUARTERS_H
#define FANCYSLEEPQUARTERS_H
#include "decorator.h"
class FancySleepQuarters:public decorator
{
private:
    /* data */
public:
    FancySleepQuarters(/* args */);
    ~FancySleepQuarters();
    void printComponent();
};

#endif