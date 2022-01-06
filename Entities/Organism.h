//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_ORGANISM_H
#define UNIVERSITY_JPO_LO_CPP_ORGANISM_H


#include "../World.h"

extern int coordsDiff[2];

class Organism {
public:
    Organism(int x, int y);
    virtual void action(World* world) = 0;
    virtual void collision(World* world, Organism* organism) = 0;
    virtual void draw() = 0;

    int getX();
    int getY();
    const int baseInitiative=0, baseStrength=0;
protected:
    int x, y;
    int *getRandomAdjacentField();
};


#endif //UNIVERSITY_JPO_LO_CPP_ORGANISM_H
