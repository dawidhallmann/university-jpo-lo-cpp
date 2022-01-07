//
// Created by ahgsfds on 2022-01-04.
//

#include "Sloth.h"

Sloth::Sloth(int x, int y) : Animal(x, y) {
    this->baseInitiative=1;
    this->baseStrength=2;
}

void Sloth::action(World* world) {
    // Nigdy nie przemieszcza się dwa
    // razy pod rząd w kolejnych turach
    if (world->getTurnNumber() % 2) Animal::action(world);
}

void Sloth::collision(World* world, Organism* organism) {
    if (this->draw() == organism->draw()){
        int * newAnimalCoords = Organism::getEmptyAdjacentField(world);
        if (!newAnimalCoords[0] && !newAnimalCoords[1]) return;
        world->addEntity(new Sloth(newAnimalCoords[0], newAnimalCoords[1]));
    } else {
        if (this->baseStrength >= organism->baseStrength){
            organism->isDead = true;
            organism->deathCallback(this);
        }
    }
}

char Sloth::draw() {
    return 'L';
}