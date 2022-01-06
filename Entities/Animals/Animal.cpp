//
// Created by ahgsfds on 2022-01-04.
//

#include "Animal.h"


void Animal::collision() {}
void Animal::action() {
    int * newCoords = Organism::getRandomAdjacentField();
    this->x += newCoords[0];
    this->y += newCoords[1];
}