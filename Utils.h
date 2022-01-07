//
// Created by ahgsfds on 2022-01-06.
//

#ifndef UNIVERSITY_JPO_LO_CPP_UTILS_H
#define UNIVERSITY_JPO_LO_CPP_UTILS_H


#include "World.h"

class Utils {
public:
    static void printGameControlOptions();
    static void intro();

    static void spawn1PlantSet(World* world);
    static void spawn1AnimalSet(World* world);

    static void spawnFoxes(World* world);

    static void spawnCompletePlantSet(World* world);
    static void spawnCompleteAnimalSet(World* world);
};


#endif //UNIVERSITY_JPO_LO_CPP_UTILS_H
