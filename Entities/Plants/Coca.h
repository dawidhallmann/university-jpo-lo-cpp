//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_COCA_H
#define UNIVERSITY_JPO_LO_CPP_COCA_H


#include "Plant.h"

class Coca : Plant {
    void collision(Organism* organism) override;
    void draw() override;
    using Plant::Plant;
};


#endif //UNIVERSITY_JPO_LO_CPP_COCA_H
