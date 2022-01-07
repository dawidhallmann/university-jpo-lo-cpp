//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "Coca.h"

void Coca::collision(World* world, Organism* organism) {
    // Zwierze, które zjadło tę roślinę w
    // następnej kolejce ma dodatkowy
    // ruch
}

void Coca::action(World *world) {
    if (Plant::plantExpanding()){
        int * diff = Organism::getRandomAdjacentField();
        if (world->isFieldEmpty(diff[0], diff[1])) {
            world->addEntity(new Coca(diff[0], diff[1]));
        }
    }
}

void Coca::draw() {
    std::cout << 'C';
}