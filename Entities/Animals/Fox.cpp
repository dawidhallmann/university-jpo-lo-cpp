//
// Created by ahgsfds on 2022-01-04.
//

#include <iostream>
#include "Fox.h"

void Fox::action() {
    Animal::action();
    // Dobry węch: lis nigdy nie ruszy
    // się na pole zajmowane przez
    // organizm silniejszy niż on
}

void Fox::draw() {
    std::cout << "F";
}
