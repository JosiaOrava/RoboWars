#include <movement.h>
#include <defines.h>
#include <PS4Controller.h>
#include <failsafe.h>

void move_forward(){
  set_motor_a(HIGH, LOW);
  set_motor_b(HIGH, LOW);
}

void move_backward(){
  set_motor_a(LOW, HIGH);
  set_motor_b(LOW, HIGH);
}

void turn_left(){
  set_motor_a(LOW, HIGH);
  set_motor_b(HIGH, LOW);
}

void turn_right(){
  set_motor_a(HIGH, LOW);
  set_motor_b(LOW, HIGH);
}

void handle_controls(){
  if (PS4.Up()) {
    Serial.println("Up");
    move_forward();
  } else if (PS4.Down()) {
    Serial.println("Down");
    move_backward();
  } else if (PS4.Left()) {
    Serial.println("Left");
    turn_left();
  } else if (PS4.Right()) {
    Serial.println("Right");
    turn_right();
  }
  if(PS4.R1() && PS4.L1()){
    Serial.println("FAILSAFE ACTIVATED!");
    failsafe(1);
  } else if(PS4.R1()){
    weaponState = !weaponState; 
    Serial.println(weaponState ? "ON" : "OFF");
    delay(500);
  }
}


void set_motor_a(int stateIA, int stateIB){
  digitalWrite(MOTOR_A_IA, stateIA);
  digitalWrite(MOTOR_A_IB, stateIB);
}

void set_motor_b(int stateIA, int stateIB){
  digitalWrite(MOTOR_B_IA, stateIA);
  digitalWrite(MOTOR_B_IB, stateIB);
}