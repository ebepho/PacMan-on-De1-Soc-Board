// #include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

//keyboard input
//game graphics
  // map
  // players
  // points
  //evil ghosts
//timer
//score
//audio


//game logic

//basic:
  //if player touches pac-dot, +1 point
  //get all pac-dots before time runs out
  //time runs out = end game
  //player gets all pac-dots = win game!

//advanced:
  //if player touches ghost, end game
  //2 players, 2 scores -> whoever gets more points wins
  //fun music

//very advanced:
  //levels
  //crazy different player modes
  //different map themes

// GAME VARIABLES
// MAP
short int Map[240][512]; 

// Player
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

// GRAPHICS STUFF
volatile int pixel_buffer_start; // global variable
short int Buffer1[240][512]; // 240 rows, 512 (320 + padding) columns
short int Buffer2[240][512];

/*
make all game variables global to access them in every function

*/


int main(void)
{
    draw_setup(); 

    while (1)
    {
      game_setup();

      
      while (timer > 0){
        // take in keyboard input
        // check position
        // ASK TA - > music();
        
        valid_move();
        erase();
        update();
        draw();
        
        if(game_over){
          break;
        }
      }
    }
}


// ------------ GRAPHICS ------------- //
void game_setup(){
  Player.x = 
  Player.y = 

  Player.x_prev =
  PLayer.y_prev =

  // other variables 
  // array pac-dots
  // set up thier positions at every spot
}

void draw_setup(){
  volatile int * pixel_ctrl_ptr = (int *)0xFF203020;
  // declare other variables(not shown)
  // initialize location and direction of rectangles(not shown)

    /* set front pixel buffer to Buffer 1 */
    *(pixel_ctrl_ptr + 1) = (int) &Buffer1; // first store the address in the  back buffer

    /* now, swap the front/back buffers, to set the front buffer location */
    wait_for_vsync(); 

    /* initialize a pointer to the pixel buffer, used by drawing functions */
    pixel_buffer_start = *pixel_ctrl_ptr;
    clear_screen(); // pixel_buffer_start points to the pixel buffer

    /* set back pixel buffer to Buffer 2 */
    *(pixel_ctrl_ptr + 1) = (int) &Buffer2;
    pixel_buffer_start = *(pixel_ctrl_ptr + 1); // we draw on the back buffer
    clear_screen(); // pixel_buffer_start points to the pixel buffer


}

void vaid_move(){
  // TAKE IN KEYBOARD INPUT
  
  //depending on the key pressed, change delat x and delta y
  //if (x + new_dx) at a wall (in x directoin)
    // -> keep dx = 0

  //if (y + new_dy) at a wall (in y direction):
    // -> keep dy = 0
}

void erase(){
  // ERASE (at old position)
}

void update(){
  //reset Player.x and Player.y to Player.x_prev and Player.y_prev
  // move player
  //change Player.x and Player.y += some delta depending on key pressed

  // check if new position is at a pac-dot
}

void draw(){
  // DRAW (at new position)

  wait_for_vsync(); 
  pixel_buffer_start = *(pixel_ctrl_ptr + 1); 
}


// code for subroutines (not shown)
void draw_box(int x0, int y0, int width, short int colour){
  for(int y = y0; (y < y0 + width) && (y < 320); y++){
    draw_line(x0, y, x0 + width, y, colour);
  }
}


void wait_for_vsync()
{
  volatile int * pixel_ctrl_ptr = (int *) 0xff203020; // base address
  int status;
  *pixel_ctrl_ptr = 1; // start the synchronization process

  // write 1 into front buffer address register
  status = *(pixel_ctrl_ptr + 3); // read the status register

  while ((status & 0x01) != 0) // polling loop waiting for S bit to go to 0
  {
    status = *(pixel_ctrl_ptr + 3);
  } // loop/function exits when status bit goes to 0
}

void update_pos(int i){
  all_boxes[i].x_prev = all_boxes[i].x;
  all_boxes[i].y_prev = all_boxes[i].y;

}


void clear_screen(){
  for(int x = 0; x < 320; x++){
    for(int y = 0; y < 240; y++){
      plot_pixel(x,y,0x0000);
    }
  }
}

void plot_pixel(int x, int y, short int line_color)
{
    volatile short int *one_pixel_address;  
    one_pixel_address = pixel_buffer_start + (y << 10) + (x << 1);
    *one_pixel_address = line_color;
}

void draw_line(int x0, int y0, int x1, int y1, short int colour){
    bool isSteep = abs(y1 - y0) > abs(x1 - x0)? true: false;

    if (isSteep) {
    swap(&x0, &y0);
    swap(&x1, &y1);
    }

  //Ensure difference in x is positive
    if (x0 > x1) {
    swap(&x0, &x1);
    swap(&y0, &y1);
    }

  int deltax = x1 - x0;
    int deltay = abs(y1 - y0);
    int error = -deltax/2 ;
  int y = y0;
    int yStep;

  yStep = (y0 < y1) ? 1 : -1;

  //Draw each pixel by calculating the slope an finding closest integer value of y
  for (int x = x0; x <= x1; x++) {
    if (isSteep) {
      plot_pixel(y, x, colour);
    } else {
      plot_pixel(x, y, colour);
    }

    error = error + deltay;

    if (error > 0) {
      y = y + yStep;
      error = error - deltax;
    }
   }
}




void swap(int* a, int*b){
  int t = *a;
  *a = *b;
  *b = t;
}



// ------------ AUDIO ------------- //
#define AUDIO_BASE 0xFF203040
#define BUF_SIZE 16000
#define decay_factor 0.4
#define delay 3200

struct audio_t {
  volatile unsigned int control; // The control/status register
  volatile unsigned char rarc; // the 8 bit RARC register
  volatile unsigned char ralc; // the 8 bit RALC register
  volatile unsigned char wsrc; // the 8 bit WSRC register
  volatile unsigned char wslc; // the 8 bit WSLC register
  volatile unsigned int ldata;
  volatile unsigned int rdata;
};
struct audio_t *const audiop = ((struct audio_t *) AUDIO_BASE);

int left_buffer[BUF_SIZE];
int right_buffer[BUF_SIZE];