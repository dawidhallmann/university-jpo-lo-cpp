//
// Created by ahgsfds on 2022-01-04.
//

#include "iostream"
#include "Plant.h"

void Plant::collision(World* world, Organism* organism) {}
void Plant::action(World* world) {}

bool Plant::plantExpanding() {
    return (std::rand()%100 < Plant::chanceToExpand);
}
