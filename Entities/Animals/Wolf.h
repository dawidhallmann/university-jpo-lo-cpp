//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_WOLF_H
#define UNIVERSITY_JPO_LO_CPP_WOLF_H


#include "Animal.h"

class Wolf : public Animal {
public:
    Wolf(int x, int y);
    char draw() override;
    using Animal::Animal;
    void collision(World *world, Organism *organism) override;
};


#endif //UNIVERSITY_JPO_LO_CPP_WOLF_H
