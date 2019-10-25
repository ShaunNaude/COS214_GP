//
// Created by danienel21 on 2019/10/25.
//

#include "Iterator/vectorPlanetsIterator.h"

void vectorPlanetsIterator::Next() {
    currPlanet++;
}

void vectorPlanetsIterator::First() {
    currPlanet = 0;
}

bool vectorPlanetsIterator::IsDone() {
    return currPlanet >= planetList.size();
}

Planet *vectorPlanetsIterator::currentItem() const {
    return planetList.at(currPlanet);
}

vectorPlanetsIterator::vectorPlanetsIterator(vector<Planet *> list) {

    planetList = list;
    currPlanet = 0;

}
