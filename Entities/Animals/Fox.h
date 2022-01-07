//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_FOX_H
#define UNIVERSITY_JPO_LO_CPP_FOX_H


#include "Animal.h"

class Fox : public Animal {
public:
    Fox(int x, int y);
    void action(World* world) override;
    char draw() override;
    using Animal::Animal;
    void collision(World *world, Organism *organism) override;
};


#endif //UNIVERSITY_JPO_LO_CPP_FOX_H
