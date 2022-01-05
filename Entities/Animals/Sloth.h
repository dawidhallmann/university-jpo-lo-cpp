//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_SLOTH_H
#define UNIVERSITY_JPO_LO_CPP_SLOTH_H


#include "Animal.h"

class Sloth : Animal {
    static const int baseInitiative=1, baseStrength=2;
    void action() override;
};


#endif //UNIVERSITY_JPO_LO_CPP_SLOTH_H
