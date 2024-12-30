#include <Arduino.h>
#include <PS4Controller.h>
#include <defines.h>
#include <movement.h>
#include <weapon.h>
#include <bt.h>
#include <failsafe.h>

bool weaponState = false;

void setup(){
  Serial.begin(9600);

  pinMode(MOTOR_A_IA, OUTPUT);
  pinMode(MOTOR_A_IB, OUTPUT);
  pinMode(MOTOR_B_IA, OUTPUT);
  pinMode(MOTOR_B_IB, OUTPUT);
  pinMode(WEAPONMOTOR, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);

  digitalWrite(MOTOR_A_IA, LOW);
  digitalWrite(MOTOR_A_IB, LOW);
  digitalWrite(MOTOR_B_IA, LOW);
  digitalWrite(MOTOR_B_IB, LOW);
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_BLUE, LOW);
  
  set_throttle(MIN_PULSE_WIDTH);  
}

void loop(){
  wait_for_connection();
  if(PS4.isConnected()){
    handle_controls();
    control_weapon();
  }
  failsafe(0);
}