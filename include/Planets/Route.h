//
// Created by danienel21 on 2019/10/19.
//

#ifndef COS214_GP_ROUTE_H
#define COS214_GP_ROUTE_H


#include "Planet.h"

class Route {
private:
    Planet* Planet1;
    Planet* Planet2;
    int distance;
public:
    Route(Planet* start , Planet* end , int dist );
    Planet* getPlanet1();
    Planet* getPlanet2();
    int getDistance();
};


#endif //COS214_GP_ROUTE_H
