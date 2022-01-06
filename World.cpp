//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "World.h"

World::World() = default;

void World::nextTurn() {
    for (const auto &organism: this->organismsActionOrder) {
        organism->action();
    }
}

void World::drawWorld(){
    std::cout << "Entites count: " << this->organismsActionOrder.size() << std::endl;
    this->generateWorldRepresentation();
    for (auto & organism : this->worldRepresentation) {
        std::cout << "|";
        for (auto & j : organism) {
            if (j) j->draw();
            else std::cout << " ";
            std::cout << "|";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void World::addEntity(Organism* organism){
    this->worldRepresentation[organism->getY()][organism->getX()] = organism;

    bool inserted = false;
    for (int i = 0; i < this->organismsActionOrder.size(); ++i) {
        if(this->organismsActionOrder.at(i)->baseInitiative < organism->baseInitiative){
            this->organismsActionOrder.insert(this->organismsActionOrder.begin()+i, organism);
            inserted = true;
            break;
        }
    }
    if (!inserted) this->organismsActionOrder.push_back(organism);
}

void World::generateWorldRepresentation(){
    this->clearWorldRepresentation();
    for (const auto &organism: this->organismsActionOrder) {
        this->worldRepresentation[organism->getY()][organism->getX()] = organism;
    }
}

void World::clearWorldRepresentation(){
    for (auto & organism : this->worldRepresentation) {
        for (auto & j : organism) j = nullptr;
    }
}