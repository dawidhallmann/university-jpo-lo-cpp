//
// Created by ahgsfds on 2022-01-04.
//

#include "Organism.h"
#include "iostream"


int coordsDiff[2];

int moveDistanceByBorder(){
    return std::rand() % 5 < 2 ? 0 : 1;
}

Organism::Organism(int x, int y){
    this->x = x;
    this->y = y;
}

int Organism::getX(){return this->x;}
int Organism::getY(){return this->y;}
int Organism::getNumberOfActions() {return this->numberOfActions;}

int Organism::setNumberOfActions(int v) {this->numberOfActions = v;}


int* Organism::getRandomAdjacentField(){
    const int diffIndx = std::rand() % 8;
    const int randDistanceByBorder = moveDistanceByBorder();

    coordsDiff[0] = this->x + (this->x>=19 ?
                    -randDistanceByBorder
                    : this->x<=0 ? randDistanceByBorder : possibleMoves[diffIndx][1]);
    coordsDiff[1] = this->y + (this->y>=19 ?
                    -(randDistanceByBorder ? moveDistanceByBorder() : 1)
                    : this->y<=0 ? (randDistanceByBorder ? moveDistanceByBorder() : 1) : possibleMoves[diffIndx][0]);
    return coordsDiff;
}

int* Organism::getEmptyAdjacentField(World* world){
    // returns [0, 0] if all are occupied

    for (auto possibleMove : possibleMoves) {
        coordsDiff[0] = this->x + possibleMove[1];
        coordsDiff[1] = this->y + possibleMove[0];
        if (coordsDiff[0] < 0 || coordsDiff[0] > 19 || coordsDiff[1] < 0 || coordsDiff[1] > 19) continue;
        if (world->isFieldEmpty(coordsDiff[0], coordsDiff[1])) return coordsDiff;
    }
    coordsDiff[0] = 0;
    coordsDiff[1] = 0;
    return coordsDiff;
}

void Organism::deathCallback(Organism *organism) {}
