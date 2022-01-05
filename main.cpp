#include <iostream>
#include "World.h"
#include "Entities/Animals/Fox.h"
#include "Entities/Animals/Sloth.h"
#include "Entities/Animals/Wolf.h"
#include "Entities/Plants/Grass.h"
#include "Entities/Plants/Dandelion.h"


int main() {
    World world;

    world.addEntity(new Fox(4, 2));
    world.addEntity(new Sloth(10, 4));
    world.addEntity(new Wolf(7, 15));

    world.addEntity(new Grass(9, 15));
    world.addEntity(new Dandelion(10, 17));

    world.drawWorld();

    return 0;
}
