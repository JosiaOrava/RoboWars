#include <Arduino.h>
#include <weapon.h>
#include <defines.h>

void control_weapon(){
  if(weaponState){
    set_throttle(MAX_PULSE_WIDTH);
  } else{
    set_throttle(MIN_PULSE_WIDTH);
  }
}

void set_throttle(int pulseWidth){
  digitalWrite(WEAPONMOTOR, HIGH);
  delayMicroseconds(pulseWidth);
  digitalWrite(WEAPONMOTOR, LOW);
  delayMicroseconds(REFRESH_INTERVAL - pulseWidth);
}