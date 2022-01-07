//
// Created by ahgsfds on 2022-01-04.
//

#include "Viper.h"

Viper::Viper(int x, int y) : Animal(x, y) {
    this->baseInitiative=2;
    this->baseStrength=3;
    this->name="Viper";
}

void Viper::collision(World* world, Organism* organism) {
    // Ginie przy kolizji z silniejszym
    // przeciwnikiem, ale zatruwa i zabija
    // swojego pogromcę.

    if (this->draw() == organism->draw()){
        int * newAnimalCoords = Organism::getEmptyAdjacentField(world);
        if (!newAnimalCoords[0] && !newAnimalCoords[1]) return;
        world->addEntity(new Viper(newAnimalCoords[0], newAnimalCoords[1]));
        std::cout << "New " << this->getName() << "!" << std::endl;
    } else {
        if (this->baseStrength >= organism->baseStrength){
            organism->isDead = true;
            organism->deathCallback(this);
        }
    }
}

void Viper::deathCallback(Organism *organism) {
    std::cout << this->getName() << " poisoned " << organism->getName() << std::endl;
    organism->isDead = true;
}

char Viper::draw() {
    return 'V';
}