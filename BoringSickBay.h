#ifndef BORINGSICKBAY_H
#define BORINGSICKBAY_H
#include "decorator.h"
class BoringSickBay:public decorator
{
private:
    /* data */
public:
    BoringSickBay(/* args */);
    ~BoringSickBay();
    void printComponent();
};

#endif