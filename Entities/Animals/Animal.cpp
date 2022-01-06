//
// Created by ahgsfds on 2022-01-04.
//

#include "Animal.h"


void Animal::collision(Organism* organism) {}
void Animal::action() {
    int * diff = Organism::getRandomAdjacentField();
    this->x += diff[0];
    this->y += diff[1];
}