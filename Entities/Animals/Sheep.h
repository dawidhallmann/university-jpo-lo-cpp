//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_SHEEP_H
#define UNIVERSITY_JPO_LO_CPP_SHEEP_H


#include "Animal.h"

class Sheep : public Animal {
public:
    Sheep(int x, int y);
    char draw() override;
    using Animal::Animal;

    void collision(World *world, Organism *organism);
};


#endif //UNIVERSITY_JPO_LO_CPP_SHEEP_H
