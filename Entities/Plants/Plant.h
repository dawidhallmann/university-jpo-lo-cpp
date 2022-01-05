//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_PLANT_H
#define UNIVERSITY_JPO_LO_CPP_PLANT_H


#include "../Organism.h"

class Plant : public Organism {
    using Organism::Organism;
    void collision() override;
    void action() override;
};


#endif //UNIVERSITY_JPO_LO_CPP_PLANT_H
