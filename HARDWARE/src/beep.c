/**
	************************************************************
	************************************************************
	************************************************************
	*	文件名： 	beep.c
	*
	*	作者： 		Sunnycee
	*
	*	日期： 		2020-03-02
	*
	*	版本： 		V1.0
	*
	*	说明： 		蜂鸣器初始化程序
	*
	*	修改记录：	
	************************************************************
	************************************************************
	************************************************************
**/
#include "beep.h"
#include "stm32f10x.h"

/*
************************************************************
*	函数名称：	Beep_Init
*
*	函数功能：	蜂鸣器初始化
*
*	入口参数：	无
*
*	返回参数：	无
*
*	说明：	 控制PB3
************************************************************
*/
void Beep_Init(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin = GPIO_Pin_3;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_10MHz;
	GPIO_Init(GPIOB, &GPIO_InitStruct);
	
	GPIOB->BRR = 1<<3;
}

