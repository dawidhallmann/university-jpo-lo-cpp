//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "World.h"
#include "Entities/Organism.h"

World::World() = default;

void World::nextTurn() {
    int oldCoords[2];
    for (auto & organism : this->organismsActionOrder) {
        oldCoords[0] = organism->getX();
        oldCoords[1] = organism->getY();
        for (int i = 0; i < organism->getNumberOfActions(); ++i) {
            organism->action(this);
        }
        Organism* collidingEntity = this->worldRepresentation[organism->getY()][organism->getX()];
        if (
            collidingEntity
            && organism->getX() != oldCoords[0]
            && organism->getY() != oldCoords[1]
        ) organism->collision(this, collidingEntity);
        this->generateWorldRepresentation();
    }
    for (int i = 0; i < this->organismsActionOrder.size(); ++i) {
        if (this->organismsActionOrder.at(i)->isDead) {
            this->organismsActionOrder.erase(this->organismsActionOrder.begin() + i);
        }
    }
    this->generateWorldRepresentation();
}

void World::drawWorld(){
    std::cout << "Entites count: " << this->organismsActionOrder.size() << std::endl;
    for (auto & organism : this->worldRepresentation) {
        std::cout << "| ";
        for (auto & j : organism) {
            std::cout << (j ? j->draw() : ' ') << '|';
        }
        std::cout << "|";
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

    for (
        auto it = this->organismsActionOrder.rbegin();
        it != this->organismsActionOrder.rend();
        it++
    ){
        this->worldRepresentation[(*it)->getY()][(*it)->getX()] = *it;
    }
}

void World::clearWorldRepresentation(){
    for (auto & organism : this->worldRepresentation) {
        for (auto & j : organism) j = nullptr;
    }
}

bool World::isFieldEmpty(int x, int y) {
    return !this->worldRepresentation[y][x];
}

Organism* World::getField(int x, int y) {
    return this->worldRepresentation[y][x];
}
