#ifndef BORINGBRIDGE_H
#define BORINGBRIDGE_H
#include "decorator.h"
class BoringBridge: decorator
{
private:
    /* data */
public:
    BoringBridge(/* args */);
    ~BoringBridge();
    void printComponent();
};

#endif