#ifndef Doctor_H
#define Doctor_H
#include "ManningTheSpaceships/Human.h"


class Doctor : public Human{
private:
    /* data */
public:
    Doctor(/* args */);
    ~Doctor();
    void Heal(Human*);
};

#endif