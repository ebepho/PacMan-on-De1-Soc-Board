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