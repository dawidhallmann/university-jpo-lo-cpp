//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_GRASS_H
#define UNIVERSITY_JPO_LO_CPP_GRASS_H


#include "Plant.h"

class Grass : public Plant {
    char draw() override;
    void action(World *world) override;
    using Plant::Plant;
};


#endif //UNIVERSITY_JPO_LO_CPP_GRASS_H
