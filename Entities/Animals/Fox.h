//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_FOX_H
#define UNIVERSITY_JPO_LO_CPP_FOX_H


#include "Animal.h"

class Fox : public Animal {
    const int baseInitiative=7, baseStrength=3;
    void action() override;
    void draw() override;
    using Animal::Animal;
};


#endif //UNIVERSITY_JPO_LO_CPP_FOX_H
