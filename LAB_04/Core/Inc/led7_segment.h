/*
 * led7_segment.h
 *
 *  Created on: Nov 27, 2024
 *      Author: HOANGANH
 */

#ifndef INC_LED7_SEGMENT_H_
#define INC_LED7_SEGMENT_H_

#include "main.h"
#include "global.h"
#include "scheduler.h"

void display7SEG_horizontal(int num);
void display7SEG_vertical(int num);
void update7SEG();
void updateBuffer();
void countdown7SEG();
void Led7SEG_YR();
void Led7SEG_GR();
void Led7SEG_RY();
void Led7SEG_RG();
void display7SEG();

#endif /* INC_LED7_SEGMENT_H_ */
