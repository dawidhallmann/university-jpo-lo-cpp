#include <iostream>
#include "World.h"
#include "Utils.h"
#include "Entities/Animals/Wolf.h"


int main() {
    Utils::intro();

    World world;
    //Utils::spawn1AnimalSet(&world);
    //Utils::spawn2AnimalSet(&world);
    //Utils::spawn3AnimalSet(&world);
    //Utils::spawn1PlantSet(&world);
    //Utils::spawnFoxes(&world);
    Utils::spawnCoca(&world);
    world.addEntity(new Wolf(8,9));
    //Utils::spawnCompleteAnimalSet(&world);
    //Utils::spawnCompletePlantSet(&world);

    world.drawWorld();
    Utils::printGameControlOptions();

    char userInput = ' ';
    while (true){
        std::cin >> userInput;
        switch (userInput) {
            case 'n':
                world.nextTurn();
                world.drawWorld();
                break;
            case 'e':
                return 0;
            default:
                break;
        }
        Utils::printGameControlOptions();
    }
}
