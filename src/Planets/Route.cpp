//
// Created by danienel21 on 2019/10/19.
//

#include "Planets/Route.h"

Route::Route(Planet *start, Planet *end, int dist) {

    startPlanet = start;
    endPlanet = end;
    distance = dist;

}

Planet *Route::getEndPlanet() {
    return endPlanet;
}

Planet *Route::getStartPlanet() {
    return startPlanet;
}

int Route::getDistance() {
    return distance;
}
