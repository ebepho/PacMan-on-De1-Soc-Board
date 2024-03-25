#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

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