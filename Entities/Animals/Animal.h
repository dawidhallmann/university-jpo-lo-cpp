//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_ANIMAL_H
#define UNIVERSITY_JPO_LO_CPP_ANIMAL_H


#include "../Organism.h"

class Animal : public Organism {
public:
    Animal(int x, int y);
    void collision(World* world, Organism* organism) override;
    using Organism::Organism;
    void action(World* world) override;
};


#endif //UNIVERSITY_JPO_LO_CPP_ANIMAL_H
