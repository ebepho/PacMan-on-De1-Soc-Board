#include "game_entities.h"

// Map
short int Map[240][512]; 

short int Buffer1[240][512]; // 240 rows, 512 (320 + padding) columns
short int Buffer2[240][512];
int game_countdown;
bool game_over;

// Player
struct Player player1;