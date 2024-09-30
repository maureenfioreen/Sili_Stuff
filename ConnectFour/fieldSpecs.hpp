// This file contains the field specifications

#ifndef FIELD_SPECS
#define FIELD_SPECS

const int HORIZONTAL_FIELD_SIZE = 7;
const int VERTICAL_FIELD_SIZE = 6; 
bool IS_GAME_RUNNING = true;
bool PLAYER_TURN = true; // Keeps track of which player is playing atm

char FIELD[6][7]; 

// Functions
extern void printField(); 
extern void initializeField(); 
extern void checkConnection(char letter);

#endif