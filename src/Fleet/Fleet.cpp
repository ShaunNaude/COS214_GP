//
// Created by danienel21 on 2019/10/19.
//

#include <Planets/homePlanet.h>
#include "Fleet/Fleet.h"
#include "Planets/Route.h"


Fleet::Fleet() {
    Planet *p1 = new homePlanet("home",1000);
    Planet* p2 = new Planet("yo",2000);
    Planet* p3 = new Planet("yo2",2000);
    Planet* p4 = new Planet("yo3",2000);

    Route * r1 = new Route(p1,p2,10);
    Route * r4 = new Route(p1,p3,10);
    Route * r2 = new Route(p4,p3,10);
    Route * r3 = new Route(p4,p2,10);

    Map * gameMap = new Map();

    gameMap->addPlanet(p1);
    gameMap->addPlanet(p2);
    gameMap->addPlanet(p3);
    gameMap->addPlanet(p4);

    gameMap->addRoute(r1);
    gameMap->addRoute(r2);
    gameMap->addRoute(r3);
    gameMap->addRoute(r4);










}
