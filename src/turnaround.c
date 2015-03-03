#include "../h/turnaround.h"
#include "ecrobot_interface.h"

void turnrobot() {
	ecrobot_set_motor_mode_speed(NXT_PORT_A, 0, 15);
	ecrobot_set_motor_mode_speed(NXT_PORT_B, 0, -15);
	systick_wait_ms(500);
	ecrobot_set_motor_mode_speed(NXT_PORT_A, 1, 0);
	ecrobot_set_motor_mode_speed(NXT_PORT_B, 1, 0);
}


