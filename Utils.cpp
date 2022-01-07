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
#include "Entities/Animals/Sheep.h"
#include "Entities/Animals/Viper.h"
#include "Entities/Plants/Coca.h"


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
    world->addEntity(new Sloth(7, 15));
    world->addEntity(new Sloth(9, 16));
    world->addEntity(new Wolf(2, 1));
}

void Utils::spawnFoxes(World *world) {
    world->addEntity(new Fox(4, 12));
    world->addEntity(new Fox(6, 12));
    world->addEntity(new Fox(4, 13));
    world->addEntity(new Fox(14, 5));
    world->addEntity(new Fox(12, 7));
    world->addEntity(new Fox(12, 8));
    world->addEntity(new Fox(11, 3));
    world->addEntity(new Fox(11, 4));
}

void Utils::spawnCompletePlantSet(World *world) {
    world->addEntity(new Grass(13, 1));
    world->addEntity(new Dandelion(17, 9));
    world->addEntity(new Coca(4, 18));
}


void Utils::spawnCompleteAnimalSet(World *world) {
    world->addEntity(new Fox(17, 2));
    world->addEntity(new Fox(9, 4));
    world->addEntity(new Fox(3, 4));

    world->addEntity(new Sloth(6, 2));
    world->addEntity(new Sloth(4, 14));
    world->addEntity(new Sloth(9, 3));

    world->addEntity(new Wolf(2, 4));
    world->addEntity(new Wolf(1, 17));
    world->addEntity(new Wolf(18, 19));
    world->addEntity(new Wolf(16, 3));
    world->addEntity(new Wolf(8, 9));

    world->addEntity(new Sheep(19, 15));
    world->addEntity(new Sheep(17, 7));
    world->addEntity(new Sheep(16, 0));

    world->addEntity(new Viper(10, 2));
    world->addEntity(new Viper(0, 7));
    world->addEntity(new Viper(12, 9));
}
