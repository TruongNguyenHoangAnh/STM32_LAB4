/*
 * fsm_automatic.c
 *
 *  Created on: Nov 27, 2024
 *      Author: HOANGANH
 */

#include "fsm_automatic.h"

void fsm_automatic()
{
	if(mode == MOD_AUTO){
	switch (status){
	case MOD_INIT:
		status = RED_GREEN;
		break;
	case RED_GREEN:
		setRedAGreenB();
		value++;
		if(value >= TIME_GREEN){
			status = RED_YELLOW;
			value = 0;
		}
		break;
	case RED_YELLOW:
		setRedAYellowB();
		value++;
		if(value >= TIME_YELLOW){
			status = GREEN_RED;
			value = 0;
		}
		break;
	case GREEN_RED:
		setGreenARedB();
		value++;
		if(value >= TIME_GREEN){
			status = YELLOW_RED;
			value = 0;
		}
		break;
	case YELLOW_RED:
		setYellowARedB();
		value++;
		if(value >= TIME_YELLOW){
			status = RED_GREEN;
			value = 0;
		}
		break;
	default:
		break;

		}
	}
}

