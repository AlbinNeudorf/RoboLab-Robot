#include "../h/walkedge.h"
#include "ecrobot_interface.h"
//#include "../h/simplesearch.h"

void walkedge() {
	if (lighttest() == true) {
		ecrobot_set_speed(NXT_PORT_A,35);
		ecrobot_set_speed(NXT_PORT_A,35);
	}
}
