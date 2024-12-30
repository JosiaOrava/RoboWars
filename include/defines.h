#ifndef DEFINES_H
#define DEFINES_H

// PINS
#define MOTOR_A_IA       32
#define MOTOR_A_IB       33
#define MOTOR_B_IA       25
#define MOTOR_B_IB       26
#define WEAPONMOTOR      27
#define LED_RED          12
#define LED_BLUE         13

// VARIABLES
#define REFRESH_INTERVAL    20000
#define MIN_PULSE_WIDTH     1000
#define MAX_PULSE_WIDTH     2000

extern bool weaponState;

// ESP MAC ADDRESS
#define MAC_ADDRESS "a0:a3:b3:aa:31:e6"

#endif