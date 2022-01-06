//
// Created by ahgsfds on 2022-01-04.
//


#ifndef UNIVERSITY_JPO_LO_CPP_WORLD_H
#define UNIVERSITY_JPO_LO_CPP_WORLD_H


#include <vector>
#include "Entities/Organism.h"

class World {
public:
    World();
    void nextTurn();
    void drawWorld();
    void addEntity(Organism* organism);
private:
    std::vector <Organism*> organismsActionOrder;
    Organism* worldRepresentation[20][20] = {nullptr};

    void generateWorldRepresentation();
    void clearWorldRepresentation();
};


#endif //UNIVERSITY_JPO_LO_CPP_WORLD_H
