//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "World.h"

World::World() = default;

void World::nextTurn(){

}

void World::drawWorld(){
    for (auto & organism : this->organisms) {
        std::cout << "|";
        for (auto & j : organism) {
            if (j) j->draw();
            else std::cout << " ";
            std::cout << "|";
        }
        std::cout << std::endl;
    }
}

void World::addEntity(Organism* organism){
    this->organisms[organism->getX()][organism->getY()] = organism;
}