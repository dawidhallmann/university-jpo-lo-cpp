//
// Created by ahgsfds on 2022-01-04.
//

#include "Organism.h"

Organism::Organism(int x, int y){
    this->x = x;
    this->y = y;
}

int Organism::getX(){return this->x;}
int Organism::getY(){return this->y;}

void Organism::setCoords(int xx, int yy){
    this->x = xx;
    this->y = yy;
}