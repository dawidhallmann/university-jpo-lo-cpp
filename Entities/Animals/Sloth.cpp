//
// Created by ahgsfds on 2022-01-04.
//

#include "Sloth.h"

void Sloth::action(World* world) {
    Animal::action(world);
    // Nigdy nie przemieszcza się dwa
    // razy pod rząd w kolejnych turach
}

char Sloth::draw() {
    return 'L';
}