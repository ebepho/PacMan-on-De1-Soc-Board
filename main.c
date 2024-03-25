#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "graphics.h"
#include "ps2.h"

// -------------------------- GAME_ENTITIES.H --------------------------
struct Player{
  int x;
  int y;

  int dx;
  int dy;

  // bool ghost;
  // bool alive;

  int x_prev;
  int y_prev;

};

// Dots
struct Dots{
  int x;
  int y;

  // bool alive;

  int x_prev;
  int y_prev;
};

// Ghost
struct Ghost{
  int x;
  int y;

  // bool alive;
  
  int x_prev;
  int y_prev;
};

// Score 
struct Score{
  int score;

  int x;
  int y;

  int x_prev;
  int y_prev;
};

struct Timer{
  int time;

  int x;
  int y;

  int x_prev;
  int y_prev;
};

// -------------------------- GLOBALS.H --------------------------
// Map
short int Map[240][512]; 
int game_countdown;
bool game_over;

// Player
struct Player player1;

// -------------------------- MAIN.CPP --------------------------
void game_setup();
void move_player();
bool valid_move();
void erase_player();
void update_player();
void draw_player();

int main(void)
{
  draw_setup(); 

  while (1)
  { 
    game_setup(); 

    while (!game_over){
      move_player(); 
      PS2_ISR();
    }
  }
}

void game_setup() {
  player1.x = 120;
  player1.y = 160;

  player1.x_prev = player1.x;
  player1.y_prev = player1.y;
}

void move_player() {
  if(valid_move()){
    erase_player();
    update_player();
    draw_player();
  }
}

bool valid_move() {
  // TAKE IN KEYBOARD INPUT
  
  //depending on the key pressed, change delat x and delta y
  //if (x + new_dx) at a wall (in x directoin)
    // -> keep dx = 0

  //if (y + new_dy) at a wall (in y direction):
    // -> keep dy = 0
}

void erase_player() {
  // ERASE (at old position)
}

void update_player() {
  //reset Player.x and Player.y to Player.x_prev and Player.y_prev
  // move player
  //change Player.x and Player.y += some delta depending on key pressed

  // check if new position is at a pac-dot
}

void draw_player() {
  // DRAW (at new position)
}