#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
// 

unsigned short pac_000[] = {
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x0b0b00, 0x131300, 0x131300, 0x131300, 0x131300, 0x080800, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x0b0b00, 0x131300, 0x9b9b00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x777700, 0x131300, 0x080800, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x0b0b00, 0x9b9b00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x777700, 0x080800, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x939300, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x6c6c00, 0x000000, 0x000000, 
  0x000000, 0x0b0b00, 0x9b9b00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x777700, 0x080800, 0x000000, 
  0x000000, 0x939300, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x6c6c00, 0x000000, 
  0x000000, 0x939300, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x6c6c00, 0x000000, 
  0x000000, 0x939300, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x6c6c00, 0x000000, 
  0x000000, 0x939300, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x6c6c00, 0x000000, 
  0x000000, 0x888800, 0xf7f700, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xf4f400, 0x646400, 0x000000, 
  0x000000, 0x000000, 0x939300, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x6c6c00, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x888800, 0xf7f700, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xf4f400, 0x646400, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x888800, 0xecec00, 0xf7f700, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xf4f400, 0xecec00, 0x646400, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x888800, 0xecec00, 0xecec00, 0xecec00, 0xecec00, 0x646400, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x0b0b00, 0x131300, 0x131300, 0x131300
};
unsigned short pac_001[] = {
0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000
};
unsigned short pac_002[] = {
 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0xffff00, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 
  0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000
};

// -------------------------- TIMER DELAY --------------------------
struct timer_t {
  volatile unsigned int status;
  volatile unsigned int control;
  volatile unsigned int periodlo;
  volatile unsigned int periodhi;
  volatile unsigned int snaplo;
  volatile unsigned int snaphi;
};
struct timer_t *const timer = (struct timer_t *)0xFF202000;
#define TIMERSEC 100000000
void waitasec(int pow_fraction) {
  unsigned int t = TIMERSEC >> pow_fraction;
  timer->control = 0x8;  // stop the timer
  timer->status = 0;     // reset TO
  timer->periodlo = (t & 0x0000FFFF);
  timer->periodhi = (t & 0xFFFF0000) >> 16;
  timer->control = 0x4;
  while ((timer->status & 0x1) == 0)
    ;
  timer->status = 0;  // reset TO
}


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

  unsigned short *pac_r[3];

  int sprite_num;
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


// -------------------------- GRAPHICS.H --------------------------
volatile int pixel_buffer_start; // global variable
short int Buffer1[240][512];
short int Buffer2[240][512];

void draw_setup();
void clear_screen();
void plot_pixel(int x, int y, short int line_color);
void draw_line(int x0, int y0, int x1, int y1, short int colour);
void swap(int* a, int*b);
void wait_for_vsync();
void flip_screen();
void sprite_draw(unsigned short sprite[], int x, int y);


// ---------------------------- PS2.H ----------------------------
unsigned char byte1 = 0;
unsigned char byte2 = 0;
unsigned char byte3 = 0;
volatile int * PS2_ptr = (int *) 0xFF200100;
int PS2_data, RVALID;
#define RLEDs ((volatile long *) 0xFF200000)


void PS2_ISR();

// -------------------------- MAIN.CPP --------------------------
void game_setup();
void move_player();
bool valid_move();
void erase_player();
void update_player();
void draw_player();


int main(void)
{
    volatile int * pixel_ctrl_ptr = (int *)0xFF203020;
    draw_setup();
	game_setup(); 	
	
    while (1)
    { 
		
		PS2_ISR();
        move_player(); 
		
        // Update the buffers
        wait_for_vsync(); // swap front and back buffers on VGA vertical sync
        pixel_buffer_start = *(pixel_ctrl_ptr + 1); // new back buffer
    }
}



void game_setup() {
  player1.x = 120;
  player1.y = 160;

  player1.x_prev = player1.x;
  player1.y_prev = player1.y;
  
  player1.pac_r[0] = pac_000;
  player1.pac_r[1] = pac_001;
  player1.pac_r[2] = pac_002;
}



void move_player() {
  if(valid_move()){
    erase_player();
    update_player();
    draw_player();
  }
}



bool valid_move() {
  int temp_dx = player1.dx, temp_dy = player1.dy;

  // move player
  if(byte3 == 0b1110010){
      temp_dx = 0;
      temp_dy = 1;
  } 
  else if (byte3 == 0b1110101){
      temp_dx = 0;
      temp_dy = -1;
  }
  else if (byte3 == 0b1110100){
      temp_dx = 1;
      temp_dy = 0;
  }
  else if (byte3 == 0b1101011){
      temp_dx = -1;
      temp_dy = 0;
  }

  // check if new position is at a pac-dot
  if(/*player1.x + temp_dx  && player1.y + temp_dy*/1){
    player1.dx = temp_dx;
    player1.dy = temp_dy;
    return true;
  }

  return false;
}

void erase_player() {
  // ERASE (at old position)
  int sxi, syi;
  int xi, yi;
  
  for (sxi = 0; sxi < 16; sxi++) {
    for (syi = 0; syi < 16; syi++) {
      xi = player1.x_prev + sxi;
      yi = player1.y_prev + syi;
      plot_pixel(xi, yi, 0x0000);
    }
  }

}

void update_player() {
  player1.x_prev = player1.x;
  player1.y_prev = player1.y;
  
  player1.x += player1.dx;
  player1.y += player1.dy;
}

void draw_player() {
  // DRAW (at new position)
  sprite_draw(player1.pac_r[player1.sprite_num], player1.x, player1.y);
  player1.sprite_num = (player1.sprite_num + 1) % 3;
  waitasec(4);
}

void sprite_draw(unsigned short sprite[], int x, int y) {
  int sxi, syi;
  int xi, yi;
  for (sxi = 0; sxi < 16; sxi++) {
    for (syi = 0; syi < 16; syi++) {
      xi = x + sxi;
      yi = y + syi;
      plot_pixel(xi, yi, sprite[syi * 16 + sxi]);
    }
  }
}

// ---------------------------- GRAPHICS.C ----------------------------
void draw_setup() {
	volatile int * pixel_ctrl_ptr = (int *)0xFF203020;
    // declare other variables(not shown)

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


void flip_screen(){
	volatile int * pixel_ctrl_ptr = (int *)0xFF203020;
	wait_for_vsync(); 
    pixel_buffer_start = *(pixel_ctrl_ptr + 1); 
}


void clear_screen() {
  for(int x = 0; x < 320; x++){
    for(int y = 0; y < 240; y++){
      plot_pixel(x,y,0x0000);
    }
  }
}


void plot_pixel(int x, int y, short int line_color) {
    volatile short int *one_pixel_address;  
    one_pixel_address = pixel_buffer_start + (y << 10) + (x << 1);
    *one_pixel_address = line_color;
}


void draw_line(int x0, int y0, int x1, int y1, short int colour) {
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

void swap(int* a, int*b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void wait_for_vsync() {
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



// -------------------------- PS2.C --------------------------
void PS2_ISR(void) {
    PS2_data = *(PS2_ptr);	// read the Data register in the PS/2 port
    RVALID = (PS2_data & 0x8000);	// extract the RVALID field

    if (RVALID != 0)
    {
        /* always save the last three bytes received */
        byte1 = byte2;
        byte2 = byte3;
        byte3 = PS2_data & 0xFF;
    }

    if ( (byte2 == 0xAA) && (byte3 == 0x00) )
    {
        // mouse inserted; initialize sending of data
        *(PS2_ptr) = 0xF4;
    }

    // Display last byte on Red LEDs
    *RLEDs = byte3;
}
