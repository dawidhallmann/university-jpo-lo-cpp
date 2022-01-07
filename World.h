//
// Created by ahgsfds on 2022-01-04.
//


#ifndef UNIVERSITY_JPO_LO_CPP_WORLD_H
#define UNIVERSITY_JPO_LO_CPP_WORLD_H


#include <vector>

class Organism;

class World {
public:
    World();
    void nextTurn();
    void drawWorld();
    void addEntity(Organism* organism);
    bool isFieldEmpty(int x, int y);
    Organism *getField(int x, int y);
private:
    Organism* worldRepresentation[20][20] = {nullptr};

    std::vector <Organism*> organismsActionOrder;
    void generateWorldRepresentation();

    void clearWorldRepresentation();
};


#endif //UNIVERSITY_JPO_LO_CPP_WORLD_H
