#include "graphics.h"

void draw_setup() {
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