//
// Created by ahgsfds on 2022-01-04.
//

#include "Fox.h"

Fox::Fox(int x, int y) : Animal(x, y) {
    this->baseInitiative=7;
    this->baseStrength=3;
}

void Fox::action(World* world) {
    Animal::action(world);
    // Dobry węch: lis nigdy nie ruszy
    // się na pole zajmowane przez
    // organizm silniejszy niż on
}

void Fox::collision(World* world, Organism* organism) {
    if (this->draw() == organism->draw()){
        int * newAnimalCoords = Organism::getEmptyAdjacentField(world);
        if (!newAnimalCoords[0] && !newAnimalCoords[1]) return;
        world->addEntity(new Fox(newAnimalCoords[0], newAnimalCoords[1]));
    } else {
        if (this->baseStrength >= organism->baseStrength){
            organism->isDead = true;
            organism->deathCallback(this);
        }
    }
}

char Fox::draw() {
    return 'F';
}
