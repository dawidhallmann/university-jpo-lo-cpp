//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_ANIMAL_H
#define UNIVERSITY_JPO_LO_CPP_ANIMAL_H


#include "../Organism.h"

class Animal : public Organism {
    void collision(Organism* organism) override;
    using Organism::Organism;
protected:
    void action() override;
};


#endif //UNIVERSITY_JPO_LO_CPP_ANIMAL_H
