#ifndef MOVEMENT_H
#define MOVEMENT_H

void set_motor_a(int stateIA, int stateIB);
void set_motor_b(int stateIA, int stateIB);
void move_forward();
void move_backward();
void turn_left();
void turn_right();
void handle_controls();

#endif