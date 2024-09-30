#include <iostream> 
#include <string>
#include "fieldSpecs.hpp"
#include <cstring>

void initializeField() {
    for (int i = 0; i < VERTICAL_FIELD_SIZE; ++i) {
        for (int j = 0; j < HORIZONTAL_FIELD_SIZE; ++j) {
            FIELD[i][j] = ' '; 
        }
    }
    return; 
}

void printField() {
    // print out the horizontal reference
    char refLetter = 'A';  
    printf("  "); 
    for (int i = 0; i < HORIZONTAL_FIELD_SIZE; ++i) {
        char divider[4] = {(refLetter + i), ' ', '|', ' '};
        std::cout << divider;
    }
    std::cout << std::endl; 

    //print out the grid
    for (int i = 0; i < VERTICAL_FIELD_SIZE; ++i) {
        std::cout << char(refLetter + i) << char(' |');
        for (int j = 0; j < HORIZONTAL_FIELD_SIZE; ++j) {
            char space[4] = {FIELD[i][j], ' ', '|', ' '}; 
            std::cout << space;
        }
        std::cout << '\n'; 
    }
    return; 
}

int main(void) {
    initializeField(); 
    printField(); 
    return 0; 
}

