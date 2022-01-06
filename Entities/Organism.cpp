//
// Created by ahgsfds on 2022-01-04.
//

#include "Organism.h"
#include "iostream"


int coordsDiff[2];

const int possibleMoves[8][2] = {
        {-1, 1},
        {0, 1},
        {1, 1},
        {1, 0},
        {1, -1},
        {0, -1},
        {-1, -1},
        {-1, 0},
};

int moveDistanceByBorder(){
    return std::rand() % 5 < 2 ? 0 : 1;
}

Organism::Organism(int x, int y){
    this->x = x;
    this->y = y;
}

int Organism::getX(){return this->x;}
int Organism::getY(){return this->y;}


int* Organism::getRandomAdjacentField(){
    const int diffIndx = std::rand() % 8;

    coordsDiff[0] = this->x + (this->x>=19 ?
                    -moveDistanceByBorder()
                    : this->x<=0 ? moveDistanceByBorder() : possibleMoves[diffIndx][1]);
    coordsDiff[1] = this->y + (this->y>=19 ?
                    -moveDistanceByBorder()
                    : this->y<=0 ? moveDistanceByBorder() : possibleMoves[diffIndx][0]);
    return coordsDiff;
}