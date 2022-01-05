//
// Created by ahgsfds on 2022-01-04.
//

#include "World.h"

World::World() = default;

void World::nextTurn(){

}

void World::drawWorld(){

}

void World::addEntity(Organism& organism){
    this->organisms[organism.getX()][organism.getY()] = &organism;
}