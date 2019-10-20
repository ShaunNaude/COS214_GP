//
// Created by danienel21 on 2019/10/19.
//

#include "Planets/Route.h"

Route::Route(Planet *start, Planet *end, int dist) {

    Planet1 = start;
    Planet2 = end;
    distance = dist;


}

Planet *Route::getPlanet2() {
    return Planet2;
}

Planet *Route::getPlanet1() {
    return Planet1;
}

int Route::getDistance() {
    return distance;
}
