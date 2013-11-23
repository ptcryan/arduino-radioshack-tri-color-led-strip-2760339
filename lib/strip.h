#ifndef Strip_h
#define Strip_h

#include "Arduino.h"

class Strip {
  public:
    Strip(byte number_of_segments, unsigned short animation_delay);
    void clear();
    void write(uint32_t colors[]);
    void sequence_cylon(uint32_t color);
    void sequence_radiate(uint32_t color);
    void sequence_scroll(uint32_t color);
    void sequence_solid(uint32_t color);

  private:
    byte _number_of_segments;
    unsigned short _animation_delay;
};

#endif
