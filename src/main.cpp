#include <Arduino.h>
#include <util/delay.h>

uint8_t bin_to_gray(uint8_t bin) {
    return bin ^ (bin >> 1);
}
int main(void){

  DDRD = 0xFF;

  uint8_t bin = 0;
  
  while(1){
    unit8_t gray = bin_to_gray(bin);
    PORTD = (PORTD & 0x0F) | ((gray & 0x0F) << 4);
    _delay_ms(1000);

    bin = (bin + 1) & 0x0F;
    

  }
}