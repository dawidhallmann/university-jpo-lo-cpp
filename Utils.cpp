//
// Created by ahgsfds on 2022-01-06.
//

#include "iostream"
#include "Utils.h"
#include "Entities/Plants/Grass.h"
#include "Entities/Plants/Dandelion.h"
#include "Entities/Animals/Fox.h"
#include "Entities/Animals/Wolf.h"
#include "Entities/Animals/Sloth.h"


void Utils::intro() {
    std::cout << std::endl;
    std::cout << "  +——————————————————————————+" << std::endl;
    std::cout << "  |  Dawid Hallmann s187209  |" << std::endl;
    std::cout << "  +——————————————————————————+" << std::endl;
    std::cout << std::endl;
}

void Utils::printGameControlOptions() {
    std::cout << " n - next turn" << std::endl;
    std::cout << " e - exit game" << std::endl;
}

void Utils::spawn1PlantSet(World *world) {
    world->addEntity(new Grass(9, 15));
    world->addEntity(new Grass(13, 19));
    world->addEntity(new Grass(14, 19));
    world->addEntity(new Grass(17, 19));
    world->addEntity(new Dandelion(10, 17));
}

void Utils::spawn1AnimalSet(World *world) {
    world->addEntity(new Fox(4, 2));
    world->addEntity(new Sloth(10, 4));
    world->addEntity(new Wolf(7, 15));
    world->addEntity(new Wolf(9, 16));
    world->addEntity(new Wolf(2, 1));
}

void Utils::spawnFoxes(World *world) {
    world->addEntity(new Fox(4, 2));
    world->addEntity(new Fox(6, 2));
    world->addEntity(new Fox(4, 3));
    world->addEntity(new Fox(4, 5));
    world->addEntity(new Fox(2, 7));
    world->addEntity(new Fox(2, 8));
    world->addEntity(new Fox(1, 3));
    world->addEntity(new Fox(1, 4));
}
