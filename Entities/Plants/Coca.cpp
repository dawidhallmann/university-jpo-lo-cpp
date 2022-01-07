//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "Coca.h"

Coca::Coca(int x, int y) : Plant(x, y) {
    this->name="Coca";
}

void Coca::collision(World* world, Organism* organism) {
    std::cout << organism->getName() << " ate Coca" << std::endl;
    // Zwierze, które zjadło tę roślinę w
    // następnej kolejce ma dodatkowy
    // ruch
    organism->setNumberOfActions(organism->getNumberOfActions() + 1);
}

void Coca::action(World *world) {
    if (Plant::plantExpanding()){
        int * diff = Organism::getRandomAdjacentField();
        if (world->isFieldEmpty(diff[0], diff[1])) {
            world->addEntity(new Coca(diff[0], diff[1]));
        }
    }
}

char Coca::draw() {
    return 'C';
}