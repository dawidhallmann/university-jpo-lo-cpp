//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_PLANT_H
#define UNIVERSITY_JPO_LO_CPP_PLANT_H


#include "../Organism.h"

class Plant : public Organism {
public:
    static const int chanceToExpand = 15; // in percents
    static bool plantExpanding();
    using Organism::Organism;
    void collision(World* world, Organism* organism) override;
    void action(World* world) override;
};


#endif //UNIVERSITY_JPO_LO_CPP_PLANT_H
