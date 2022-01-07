//
// Created by ahgsfds on 2022-01-04.
//

#include "Fox.h"

void Fox::action(World* world) {
    Animal::action(world);
    // Dobry węch: lis nigdy nie ruszy
    // się na pole zajmowane przez
    // organizm silniejszy niż on
}

char Fox::draw() {
    return 'F';
}
