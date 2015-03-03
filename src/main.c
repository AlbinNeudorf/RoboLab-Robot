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

// turnaround speed: 30
// walk speed: 50


void walkedge() {
	if (lighttest() == 1) {
		ecrobot_set_speed(NXT_PORT_A,35);
		ecrobot_set_speed(NXT_PORT_A,35);
	}else{
		simplesearch();
	}
}

void lichtwertausgabe() {
	ecrobot_set_light_sensor_active(NXT_PORT_C);
	int lightwert = ecrobot_get_light_sensor(NXT_PORT_C);
	ecrobot_status_monitor(lightwert);
}

int lighttest() {
	int lightvalue = ecrobot_get_light_sensor(NXT_PORT_C);
	if (lightvalue <= 500) {
		return 1;
	}else{
		return 0;
	}
}



TASK(OSEK_Main_Task) {
	while (1) {
		lichtwertausgabe();
		systick_wait_ms(200);
	}
}
