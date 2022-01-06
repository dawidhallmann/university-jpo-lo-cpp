//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_VIPER_H
#define UNIVERSITY_JPO_LO_CPP_VIPER_H


#include "Animal.h"

class Viper : public Animal {
    const int baseInitiative=2, baseStrength=3;
    void collision(World* world, Organism* organism) override;
    void draw() override;
    using Animal::Animal;
};


#endif //UNIVERSITY_JPO_LO_CPP_VIPER_H
