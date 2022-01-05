//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_WORLD_H
#define UNIVERSITY_JPO_LO_CPP_WORLD_H


#include "Entities/Organism.h"

class World {
public:
    World();
    void nextTurn();
    void drawWorld();
    void addEntity(Organism& organism);
private:
    Organism* organisms[20][20];
};


#endif //UNIVERSITY_JPO_LO_CPP_WORLD_H
