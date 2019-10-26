#ifndef COS214_GP_VECTORPLANETSITERATOR_H
#define COS214_GP_VECTORPLANETSITERATOR_H
#include <vector>
#include "Iterator/Iterator.h"

/**
 * This class is the Concrete Iterator in the Iterator design pattern
 * */

class vectorPlanetsIterator: public Iterator {
private:
    ///Aggregate List
    vector<Planet*> planetList;
    ///Integer to represent planet index
    int currPlanet;
public:
    ///constructor that initialises aggregate list
    vectorPlanetsIterator(vector<Planet*> list);
    ///implementation of Next() function from base class
    void Next() override;
    ///implementation of First() function from base class
    void First() override;
    ///implementation of IsDone() function from base class
    bool IsDone() override;
    ///implementation of currentItem() function from base class
    Planet* currentItem() const override;
};

#endif 
