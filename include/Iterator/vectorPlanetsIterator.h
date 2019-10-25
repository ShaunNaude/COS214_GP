//
// Created by danienel21 on 2019/10/25.
//

#ifndef COS214_GP_VECTORPLANETSITERATOR_H
#define COS214_GP_VECTORPLANETSITERATOR_H

#include <vector>
#include "Iterator/Iterator.h"

class vectorPlanetsIterator: public Iterator {
private:
    vector<Planet*> planetList;
    int currPlanet;
public:

    vectorPlanetsIterator(vector<Planet*> list);

    void Next() override;

    void First() override;

    bool IsDone() override;

    Planet *currentItem() const override;
};


#endif //COS214_GP_VECTORPLANETSITERATOR_H
