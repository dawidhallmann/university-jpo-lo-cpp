//
// Created by ahgsfds on 2022-01-04.
//

#include "iostream"
#include "Animal.h"

const int possibleMoves[9][2] = {
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

void Animal::collision() {}
void Animal::action() {
    const int diffIndx = std::rand() % 9;

    this->y += this->y>=19 ?
            -moveDistanceByBorder()
            : this->y<=0 ? moveDistanceByBorder() : possibleMoves[diffIndx][0];
    this->x += this->x>=19 ?
            -moveDistanceByBorder()
            : this->x<=0 ? moveDistanceByBorder() : possibleMoves[diffIndx][1];
}