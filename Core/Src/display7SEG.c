/*
 * display7SEG.c
 *
 *  Created on: Nov 4, 2022
 *      Author: trand
 */

#include "main.h"
#include "display7SEG.h"

void turnOff7SEG(){
	HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 1);
	HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 1);
	HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 1);
	HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 1);
	HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 1);
	HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 1);
	HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 1);
}

void display7SEG (int num){
	turnOff7SEG();
	switch(num){
	case 0:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		break;
	}
	case 1:
	{
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		break;
	}
	case 2:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		break;
	}
	case 3:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		break;
	}
	case 4:
	{
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		break;
	}
	case 5:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		break;
	}
	case 6:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		break;
	}
	case 7:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		break;
	}
	case 8:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(E_GPIO_Port, E_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		break;
	}
	case 9:
	{
		HAL_GPIO_WritePin(A_GPIO_Port, A_Pin, 0);
		HAL_GPIO_WritePin(B_GPIO_Port, B_Pin, 0);
		HAL_GPIO_WritePin(C_GPIO_Port, C_Pin, 0);
		HAL_GPIO_WritePin(D_GPIO_Port, D_Pin, 0);
		HAL_GPIO_WritePin(F_GPIO_Port, F_Pin, 0);
		HAL_GPIO_WritePin(G_GPIO_Port, G_Pin, 0);
		break;
	}
	default:
		break;
	}
}
