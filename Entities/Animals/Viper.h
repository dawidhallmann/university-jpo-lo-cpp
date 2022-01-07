//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_VIPER_H
#define UNIVERSITY_JPO_LO_CPP_VIPER_H


#include "Animal.h"

class Viper : public Animal {
public:
    Viper(int x, int y);
    void collision(World* world, Organism* organism) override;
    char draw() override;
    using Animal::Animal;
    void deathCallback(Organism *organism);
};


#endif //UNIVERSITY_JPO_LO_CPP_VIPER_H
