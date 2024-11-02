/*
 * accl.c
 *
 *  Created on: Jul 24, 2024
 *      Author: Lenovo
 */


#include "accl.h"
uint8_t I2C_Error=0;
void accl_innit(accl * acc ,I2C_HandleTypeDef * hi2c,uint8_t addr)
{
	acc -> hi2c = hi2c;
	acc -> addr = addr << 1;

	HAL_StatusTypeDef ret;

	ret = HAL_I2C_IsDeviceReady(acc -> hi2c,acc -> addr,2,50);
	if(ret != HAL_OK)
	{
		I2C_Error ++;
	}
	else
	{

	}


}
uint8_t test_comms(accl * acc)
{
	HAL_StatusTypeDef ret;

		ret = HAL_I2C_IsDeviceReady(acc -> hi2c,acc -> addr,2,50);
		if(ret != HAL_OK)
		{
			I2C_Error ++;
		}
		else
		{

		}
}

uint8_t get_MFSR(accl * acc)
{
	uint8_t mfsr =0;
	readRegister8(acc,WHO_AM_I);
	return mfsr;
}

uint8_t readRegister8(accl * acc,uint8_t reg)
{
	uint8_t val = 0;
	HAL_I2C_Mem_Read(acc -> hi2c,acc ->addr,reg,1,&val,1,20);
	return val;
}
