//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_WOLF_H
#define UNIVERSITY_JPO_LO_CPP_WOLF_H


#include "Animal.h"

class Wolf : public Animal {
    const int baseInitiative=5, baseStrength=9;
    char draw() override;
    using Animal::Animal;
};


#endif //UNIVERSITY_JPO_LO_CPP_WOLF_H
