//
// Created by ahgsfds on 2022-01-04.
//

#include "Animal.h"

void Animal::action(World* world) {
    int * diff = Organism::getRandomAdjacentField();
    this->x = diff[0];
    this->y = diff[1];
}

void Animal::collision(World *world, Organism *organism) {}

Animal::Animal(int x, int y) : Organism(x, y) {}
