//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_COCA_H
#define UNIVERSITY_JPO_LO_CPP_COCA_H


#include "Plant.h"

class Coca : public Plant {
    void collision(World* world, Organism* organism) override;
    char draw() override;
    using Plant::Plant;
    void action(World *world) override;
};


#endif //UNIVERSITY_JPO_LO_CPP_COCA_H
