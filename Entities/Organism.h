//
// Created by ahgsfds on 2022-01-04.
//

#ifndef UNIVERSITY_JPO_LO_CPP_ORGANISM_H
#define UNIVERSITY_JPO_LO_CPP_ORGANISM_H


#include "iostream"
#include "../World.h"

extern int coordsDiff[2];

class Organism {
public:
    Organism(int x, int y);
    virtual void action(World* world) = 0;
    virtual void collision(World* world, Organism* organism) = 0;
    virtual char draw() = 0;
    virtual void deathCallback(Organism* organism);

    int getX();
    int getY();
    int baseInitiative=0, baseStrength=0;
    bool isDead = false;
protected:
    int x, y;
    int *getRandomAdjacentField();
    int *getEmptyAdjacentField(World* world);
};


#endif //UNIVERSITY_JPO_LO_CPP_ORGANISM_H
