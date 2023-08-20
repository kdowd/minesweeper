#pragma once

#include <algorithm>
#include <cmath>



int get_random(int min, int max) {
    return ((std::rand()%(int)(((max) + 1)-(min)))+ (min));
}

void fill_vector(char &&c){
    std::fill(BOARD_VECTOR.begin(), BOARD_VECTOR.end(), c);
}

