#pragma once
#include <string>
#include <vector>
#include <algorithm>


enum GameMoves { BASE = '-', MINE= 42, USER = '-'};
inline int BOARD_W = 10;
inline int BOARD_H = 12;
inline int BOARD_LEN = BOARD_W * BOARD_H;
inline  std::vector<char> BOARD_VECTOR(BOARD_LEN);


// states
// base
// users first go
// numbs 1 to 8
