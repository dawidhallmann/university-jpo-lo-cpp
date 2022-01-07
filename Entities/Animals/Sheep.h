//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_SHEEP_H
#define UNIVERSITY_JPO_LO_CPP_SHEEP_H


#include "Animal.h"

class Sheep : public Animal {
    const int baseInitiative=4, baseStrength=4;
    char draw() override;
    using Animal::Animal;
};


#endif //UNIVERSITY_JPO_LO_CPP_SHEEP_H
