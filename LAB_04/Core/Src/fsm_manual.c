/*
 * fsm_manual.c
 *
 *  Created on: Nov 27, 2024
 *      Author: HOANGANH
 */

#include "fsm_manual.h"

void modifyMode(int temp){
	static int num = 0;
	switch(num){
	case 0:
    	display7SEG_horizontal(temp/10);
        display7SEG_vertical(mode/10);
        num = 1;
		break;
	case 1:
    	display7SEG_horizontal(temp%10);
        display7SEG_vertical(mode%10);
        num = 0;
		break;
	default:
		break;

	}
}


void fsm_manual(){
	switch(mode){
		case MOD_AUTO:
			if(isButtonPressed(0) == 1){
			mode = MOD_RED;
			status = MOD_INIT;
			value = 0;
			}
			break;
		case MOD_RED:
			modifyMode(TIME_RED_tmp);
			toggleAllRed();

			if(isButtonPressed(0) == 1){
				mode = MOD_YELLOW;
				TIME_RED_tmp = 0;
			}

			if(isButtonPressed(1) == 1){
				TIME_RED_tmp++;
				if(TIME_RED_tmp > 99){
					TIME_RED_tmp = 1;
				}
			}

			if(isButtonPressed(2) == 1){
				TIME_RED = TIME_RED_tmp;
			}
			break;
		case MOD_YELLOW:
			modifyMode(TIME_YELLOW_tmp);
			toggleAllYellow();

			if(isButtonPressed(0) == 1){
				mode = MOD_GREEN;
				TIME_YELLOW_tmp = 0;
			}

			if(isButtonPressed(1) == 1){
				TIME_YELLOW_tmp++;
				if(TIME_YELLOW_tmp > 99){
					TIME_YELLOW_tmp = 1;
				}
			}

			if(isButtonPressed(2) == 1){
				TIME_YELLOW = TIME_YELLOW_tmp;
			}
			break;
		case MOD_GREEN:
			modifyMode(TIME_GREEN_tmp);
			toggleAllGreen();

			if(isButtonPressed(0) == 1){
				mode = MOD_AUTO;
				TIME_GREEN_tmp = 0;
			}

			if(isButtonPressed(1) == 1){
				TIME_GREEN_tmp++;
				if(TIME_GREEN_tmp > 99){
					TIME_GREEN_tmp = 1;
				}
			}

			if(isButtonPressed(2) == 1){
				TIME_GREEN = TIME_GREEN_tmp;
				TIME_RED_tmp = TIME_GREEN_tmp + TIME_YELLOW_tmp;
//				if(TIME_RED_tmp == TIME_GREEN_tmp + TIME_YELLOW_tmp){
					TIME_RED = TIME_RED_tmp;
					TIME_YELLOW = TIME_YELLOW_tmp;
					TIME_GREEN = TIME_GREEN_tmp;
//				}
				updateBuffer();
				status = MOD_INIT;
				status_system = 0;
			}
			break;

		default:
			break;
	}
}
