/*
 * led7_segment.c
 *
 *  Created on: Nov 27, 2024
 *      Author: HOANGANH
 */

#include "led7_segment.h"


void display7SEG_horizontal(int num)
{
	switch(num){
	  case 0:
		  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_SET);
		  break;
	  case 1:
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_SET);
		  break;
	  case 2:
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);
		  break;
	  case 3:
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);
		  break;
	  case 4:
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_SET);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(GPIOB, SEG1_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_1, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_3, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG1_6, GPIO_PIN_RESET);
		  break;

	}
}

void display7SEG_vertical(int num)
{
	switch(num){
	  case 0:
		  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
		  break;
	  case 3:
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
		  break;
	  case 4:
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
		  break;
	  case 5:
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
		  break;
	  case 6:
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
		  break;
	  case 7:
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_SET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_SET);
		  break;
	  case 8:
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
		  break;
	  case 9:
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_0, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_1, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_2, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_3, GPIO_PIN_RESET);
	  	  HAL_GPIO_WritePin(GPIOB, SEG2_4, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_5, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, SEG2_6, GPIO_PIN_RESET);
		  break;

	}
}

void update7SEG(){
	static int indexBuffer = 0;
	switch(indexBuffer){
	case 0:
		HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_SET);
		indexBuffer = 1;
		break;

	case 1:
		HAL_GPIO_WritePin(GPIOA, EN0, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN1, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3, GPIO_PIN_RESET);
		indexBuffer = 0;
		break;

	default:
		break;
	}
}

void updateBuffer()
{
		led_buffer[0] = TIME_RED / 10;
		led_buffer[1] = TIME_RED % 10;
		led_buffer[2] = TIME_GREEN / 10;
		led_buffer[3] = TIME_GREEN % 10;
		led_buffer[4] = TIME_YELLOW / 10;
		led_buffer[5] = TIME_YELLOW % 10;
}


void countdown7SEG() {
    int i;
    // Xử lý đếm ngược và đặt lại thời gian
    for (i = 0; i < 6; i += 2) { // Xử lý từng cặp led_buffer (hàng chục và đơn vị)
        if (led_buffer[i + 1] < 0 && led_buffer[i] > 0) {
            led_buffer[i + 1] = 9;
            led_buffer[i]--;
        }
        if (led_buffer[i] == 0 && led_buffer[i + 1] == 0) {
            if (i == 0) { // Đèn đỏ
                led_buffer[0] = TIME_RED / 10;
                led_buffer[1] = TIME_RED % 10;
            } else if (i == 2) { // Đèn xanh
                led_buffer[2] = TIME_GREEN / 10;
                led_buffer[3] = TIME_GREEN % 10;
            } else if (i == 4) { // Đèn vàng
                led_buffer[4] = TIME_YELLOW / 10;
                led_buffer[5] = TIME_YELLOW % 10;
            }
        }
    }
}

void led7SEG_YR() {
    switch (status_system) {
        case 0:
        	display7SEG_horizontal(led_buffer[4]); // Hàng chục đèn vàng
            display7SEG_vertical(led_buffer[0]); // Hàng chục đèn đỏ
            status_system = 1;
            break;
        case 1:
            display7SEG_horizontal(led_buffer[5]); // Hàng đơn vị đèn vàng
            display7SEG_vertical(led_buffer[1]); // Hàng đơn vị đèn đỏ
            led_buffer[1]--; // Giảm đèn đỏ
            led_buffer[5]--; // Giảm đèn vàng
            status_system = 0;
            break;
    }
}


void led7SEG_GR() {
    switch (status_system) {
        case 0:
        	display7SEG_horizontal(led_buffer[2]); // Hàng chục đèn xanh
            display7SEG_vertical(led_buffer[0]); // Hàng chục đèn đỏ
            status_system = 1;
            break;
        case 1:
            display7SEG_horizontal(led_buffer[3]); // Hàng đơn vị đèn xanh
            display7SEG_vertical(led_buffer[1]); // Hàng đơn vị đèn đỏ
            led_buffer[1]--; // Giảm đèn đỏ
            led_buffer[3]--; // Giảm đèn xanh
            status_system = 0;
            break;
    }
}

void led7SEG_RY() {
    switch (status_system) {
        case 0:
        	display7SEG_horizontal(led_buffer[0]); // Hàng chục đèn đỏ
            display7SEG_vertical(led_buffer[4]); // Hàng chục đèn vàng
            status_system = 1;
            break;
        case 1:
            display7SEG_horizontal(led_buffer[1]); // Hàng đơn vị đèn đỏ
            display7SEG_vertical(led_buffer[5]); // Hàng đơn vị đèn vàng
            led_buffer[1]--; // Giảm đèn đỏ
            led_buffer[5]--; // Giảm đèn vàng
            status_system = 0;
            break;
    }
}

void led7SEG_RG() {
    switch (status_system) {
        case 0:
        	display7SEG_horizontal(led_buffer[0]); // Hàng chục đèn xanh
            display7SEG_vertical(led_buffer[2]); // Hàng chục đèn đỏ
            status_system = 1;
            break;
        case 1:
            display7SEG_horizontal(led_buffer[1]); // Hàng đơn vị đèn đỏ
            display7SEG_vertical(led_buffer[3]); // Hàng đơn vị đèn xanh
            led_buffer[1]--; // Giảm đèn đỏ
            led_buffer[3]--; // Giảm đèn xanh
            status_system = 0;
            break;
    }
}

void display7SEG(){
	switch(status){
	case MOD_INIT:
		break;
	case RED_GREEN:
		led7SEG_RG();
		break;
	case RED_YELLOW:
		led7SEG_RY();
		break;
	case GREEN_RED:
		led7SEG_GR();
		break;
	case YELLOW_RED:
		led7SEG_YR();
		break;
	default:
		break;
	}
}



