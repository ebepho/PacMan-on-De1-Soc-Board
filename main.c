// #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "globals.h"
#include "graphics.h"
#include "ps2.h"

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
        wait_for_vsync(); 
        pixel_buffer_start = *(pixel_ctrl_ptr + 1); 
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