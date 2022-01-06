//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "Grass.h"

void Grass::action(World *world) {
    if (!(std::rand()%5)){
        int * diff = Organism::getRandomAdjacentField();
        if (world->isFieldEmpty(diff[0], diff[1])) {
            world->addEntity(new Grass(diff[0], diff[1]));
        }
    }
}

void Grass::draw() {
    std::cout << 'G';
}
