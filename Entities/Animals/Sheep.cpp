//
// Created by ahgsfds on 2022-01-04.
//

#include "Sheep.h"

Sheep::Sheep(int x, int y) : Animal(x, y) {
    this->baseInitiative=4;
    this->baseStrength=4;
    this->name="Sheep";
}

void Sheep::collision(World* world, Organism* organism) {
    if (this->draw() == organism->draw()){
        int * newAnimalCoords = Organism::getEmptyAdjacentField(world);
        if (!newAnimalCoords[0] && !newAnimalCoords[1]) return;
        world->addEntity(new Sheep(newAnimalCoords[0], newAnimalCoords[1]));
        std::cout << "New " << this->getName() << "!" << std::endl;
    } else {
        if (this->baseStrength >= organism->baseStrength){
            organism->isDead = true;
            organism->deathCallback(this);
        }
    }
}

char Sheep::draw() {
    return 'S';
}