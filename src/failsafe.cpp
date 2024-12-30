#include <Arduino.h>
#include <defines.h>
#include <failsafe.h>
#include <movement.h>
#include <weapon.h>


void failsafe(int level){
    set_motor_a(LOW, LOW);
    set_motor_b(LOW, LOW);
    weaponState = false;
    control_weapon();
    if (level == 1) {
        while(1){
            digitalWrite(LED_RED, LOW);
            delay(500);
            digitalWrite(LED_RED, HIGH);
            delay(500);
        }
    }
}


