#include "../h/main.h"

/// DO NOT DELETE THIS METHOD
/// It is called every 1ms and e.g. can be used for implementing a
/// real time counter / clock.
void user_1ms_isr_type2(void) {
}

void ecrobot_device_initialize(void) {
}

void ecrobot_device_terminate(void) {
}

void move_wheels() {
	ecrobot_set_motor_speed(NXT_PORT_A,25);
	ecrobot_set_motor_speed(NXT_PORT_B,40);
}


TASK(OSEK_Main_Task) {
	while (1) {
		turnrobot();
		/* 500msec wait */
		systick_wait_ms(500);
	}
}
