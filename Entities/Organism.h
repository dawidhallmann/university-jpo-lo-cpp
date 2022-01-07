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
    int getNumberOfActions();
    int setNumberOfActions(int v);
    int baseInitiative=0, baseStrength=0;
    bool isDead = false;
protected:
    int x, y;
    int *getRandomAdjacentField();
    int *getEmptyAdjacentField(World* world);
    int numberOfActions = 1;

    constexpr static int possibleMoves[8][2] = {
            {-1, 1},
            {0, 1},
            {1, 1},
            {1, 0},
            {1, -1},
            {0, -1},
            {-1, -1},
            {-1, 0},
    };
};


#endif //UNIVERSITY_JPO_LO_CPP_ORGANISM_H
