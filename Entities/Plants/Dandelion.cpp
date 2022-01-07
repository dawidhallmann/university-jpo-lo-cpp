//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "Dandelion.h"

void Dandelion::action(World* world) {
    for (int i = 0; i < 3; ++i) {
        if (Plant::plantExpanding()){
            int * diff = Organism::getRandomAdjacentField();
            if (world->isFieldEmpty(diff[0], diff[1])) {
                world->addEntity(new Dandelion(diff[0], diff[1]));
            }
        }
    }
}

char Dandelion::draw() {
    return 'D';
}