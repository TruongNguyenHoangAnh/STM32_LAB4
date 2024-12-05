/*
 * traffic_light.c
 *
 *  Created on: Nov 27, 2024
 *      Author: HOANGANH
 */

#include <traffic_light.h>
#include "main.h"
#include "global.h"
#include "led7_segment.h"
#include "software_timer.h"


void toggleAllRed(){
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);

	HAL_GPIO_TogglePin(GPIOA, REDA);
	HAL_GPIO_TogglePin(GPIOA, REDB);
}

void toggleAllGreen(){
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_RESET);

	HAL_GPIO_TogglePin(GPIOA, GREENA);
	HAL_GPIO_TogglePin(GPIOA, GREENB);
}

void toggleAllYellow(){
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_RESET);

	HAL_GPIO_TogglePin(GPIOA, YELLOWA);
	HAL_GPIO_TogglePin(GPIOA, YELLOWB);
}

void setRedAGreenB()
{
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_SET);
}

void setRedAYellowB()
{
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);
}

void setGreenARedB()
{
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);
}

void setYellowARedB()
{
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);
}


void OffAllLed()
{
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);
}

void offGreenYellow()
{
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);
}

void offGreenRed()
{
	HAL_GPIO_WritePin(GPIOA, GREENB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, GREENA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_RESET);
}

void offRedYellow()
{
	HAL_GPIO_WritePin(GPIOA, YELLOWB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDB, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, YELLOWA, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, REDA, GPIO_PIN_RESET);
}