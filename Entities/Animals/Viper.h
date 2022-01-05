//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_VIPER_H
#define UNIVERSITY_JPO_LO_CPP_VIPER_H


#include "Animal.h"

class Viper : Animal {
    static const int baseInitiative=2, baseStrength=3;
    void collision() override;
};


#endif //UNIVERSITY_JPO_LO_CPP_VIPER_H
