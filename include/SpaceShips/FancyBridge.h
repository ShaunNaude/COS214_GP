#ifndef FANCYBRIDGE_H
#define FANCYBRIDGE_H
#include "decorator.h"
class FancyBridge: public decorator
{
private:
    /* data */
public:
    FancyBridge(/* args */);
    ~FancyBridge();
    void printComponent();
};

#endif