//
// Created by ahgsfds on 2022-01-04.
//

#include "Fox.h"

Fox::Fox(int x, int y) : Animal(x, y) {
    this->baseInitiative=7;
    this->baseStrength=3;
    this->name="Fox";
}

void Fox::action(World* world) {
    // Dobry węch: lis nigdy nie ruszy
    // się na pole zajmowane przez
    // organizm silniejszy niż on

    int * diff = Organism::getRandomAdjacentField();
    if (world->getField(diff[0], diff[1]) && world->getField(diff[0], diff[1])->baseStrength > this->baseStrength){
        int possibleCoords[2];
        for (auto possibleMove : possibleMoves) {
            possibleCoords[0] = this->x + possibleMove[1];
            possibleCoords[1] = this->y + possibleMove[0];
            if (possibleCoords[0] < 0 || possibleCoords[0] > 19 || possibleCoords[1] < 0 || possibleCoords[1] > 19) continue;
            if (
                world->isFieldEmpty(possibleCoords[0], possibleCoords[1]) ||
                world->getField(possibleCoords[0], possibleCoords[1])->baseStrength <= this->baseStrength
            ) {
                std::cout << "Fox ran away from " << world->getField(diff[0], diff[1])->getName() << std::endl;
                this->x = coordsDiff[0];
                this->y = coordsDiff[1];
                return;
            }
        }
    } else {
        this->x = diff[0];
        this->y = diff[1];
    }
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
