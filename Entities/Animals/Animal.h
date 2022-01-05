//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_ANIMAL_H
#define UNIVERSITY_JPO_LO_CPP_ANIMAL_H


#include "../Organism.h"

class Animal : public Organism {
    void action() override;
    void collision() override;
    using Organism::Organism;
};


#endif //UNIVERSITY_JPO_LO_CPP_ANIMAL_H
