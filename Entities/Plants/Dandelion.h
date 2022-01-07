//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_DANDELION_H
#define UNIVERSITY_JPO_LO_CPP_DANDELION_H


#include "Plant.h"

class Dandelion : public Plant {
    void action(World* world) override;
    char draw() override;
    using Plant::Plant;
};


#endif //UNIVERSITY_JPO_LO_CPP_DANDELION_H
