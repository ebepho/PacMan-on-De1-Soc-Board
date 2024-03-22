unsigned char byte1 = 0;
unsigned char byte2 = 0;
unsigned char byte3 = 0;
volatile int * PS2_ptr = (int *) 0xFF200100;
int PS2_data, RVALID;

void PS2_ISR_setup();
void PS2_ISR();