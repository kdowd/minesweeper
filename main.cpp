


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

#include "globals.h"
#include "utils.h"

using namespace std;

void draw_board(bool debug){
    for (int i = 0; i < BOARD_LEN; i++){
        if (i % 10 == 0) {
            cout << "\n";
        }
        cout << " " << BOARD_VECTOR[i]  << " ";
    }

}
void draw_board(){
    for (int i = 0; i < BOARD_LEN; i++){
        if (i % 10 == 0) {
            cout << "\n";
        }
        cout << " " << char(USER)  << " ";
    }
}

void add_mines(int &&n){

    unsigned int mines = 0;

    do {
        int r = get_random(0, BOARD_LEN-1);
        BOARD_VECTOR.at(r) = MINE;
        mines = count(BOARD_VECTOR.begin(), BOARD_VECTOR.end(), MINE);

    } while( mines < n);

    cout << "Mines = " << mines;
}


int main()
{
    bool tick;
    fill_vector('-');
    add_mines(30);
    draw_board(true);




    cin.get();
    return (0);
}