/*
 * global.c
 *
 *  Created on: Nov 16, 2022
 *      Author: trand
 */

#include "global.h"

int switch7SEG = FIRST_LED;
const int MAX_LED = 4;
int index_led = 0;
int led_buffer[MAX_LED] = {1, 2, 3, 4};
