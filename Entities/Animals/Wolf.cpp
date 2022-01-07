//
// Created by ahgsfds on 2022-01-04.
//

#include "Wolf.h"

Wolf::Wolf(int x, int y) : Animal(x, y) {
    this->baseInitiative=5;
    this->baseStrength=9;
    this->name="Wolf";
}

void Wolf::collision(World* world, Organism* organism) {
    if (this->draw() == organism->draw()){
        int * newAnimalCoords = Organism::getEmptyAdjacentField(world);
        if (!newAnimalCoords[0] && !newAnimalCoords[1]) return;
        world->addEntity(new Wolf(newAnimalCoords[0], newAnimalCoords[1]));
        std::cout << "New " << this->getName() << "!" << std::endl;
    } else {
        if (this->baseStrength >= organism->baseStrength){
            organism->isDead = true;
            organism->deathCallback(this);
        }
    }
}

char Wolf::draw() {
    return 'W';
}