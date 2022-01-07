//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_SLOTH_H
#define UNIVERSITY_JPO_LO_CPP_SLOTH_H


#include "Animal.h"

class Sloth : public Animal {
public:
    Sloth(int x, int y);
    void action(World* world) override;
    char draw() override;
    using Animal::Animal;

    void collision(World *world, Organism *organism);
};


#endif //UNIVERSITY_JPO_LO_CPP_SLOTH_H
