#ifndef BORINGSLEEPQUARTERS_H
#define BORINGSLEEPQUARTERS_H
#include "decorator.h"
class BoringSleepQuarters:public decorator
{
private:
    /* data */
public:
    BoringSleepQuarters(/* args */);
    ~BoringSleepQuarters();
    void printComponent();
};

#endif