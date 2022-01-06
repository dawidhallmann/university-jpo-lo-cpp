//
// Created by ahgsfds on 2022-01-04.
//

#include "iostream"
#include "Animal.h"


void Animal::collision(World* world, Organism* organism) {

}

void Animal::action(World* world) {
    int * diff = Organism::getRandomAdjacentField();
    this->x = diff[0];
    this->y = diff[1];
}