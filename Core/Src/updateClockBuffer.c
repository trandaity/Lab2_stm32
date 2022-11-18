/*
 * updateClockBuffer.c
 *
 *  Created on: Nov 18, 2022
 *      Author: trand
 */

#include "updateClockBuffer.h"
#include "global.h"

void updateClockBuffer() {
	led_buffer[3] = minute%10;
	led_buffer[2] = minute/10;
	led_buffer[1] = hour%10;
	led_buffer[0] = hour/10;
}
