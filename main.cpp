#include <iostream>
#include "World.h"
#include "Entities/Animals/Fox.h"


int main() {
    World world;
    world.addEntity(new Fox(4, 2));
    world.drawWorld();

    return 0;
}
