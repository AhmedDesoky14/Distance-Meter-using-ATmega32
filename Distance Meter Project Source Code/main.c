/*
 *	Mini_Project_4
 *  Created on: Oct 17, 2022
 *  Author: Ahmed Desoky
 *  Description:
 *  				Project made using 4x16 LCD and HC-SR04 Ultrasonic Sensor
 *  				Target: to sense the Distance
 */
#include "lcd.h"
#include "hcsr04_ultrasonic_sensor.h"
int main (void)
{
	SET_BIT(SREG,7); /*Enable I-Bit*/
	unsigned long Distance=0;
	LCD_init(); /*Initialize LCD*/
	ULTRASONIC_init(); /*Initialize Ultrasonic Sensor*/
	LCD_displayString("Distance=    cm");
	LCD_displayStringRowColumn(1,0,"MAX RANGE= 400cm");
	while(1)
	{
		Distance = ULTRASONIC_readDistance();
		LCD_moveCursor(0,10);
		if(Distance>400)
		{
			LCD_integerToString(400);
		}
		else if(Distance<100 && Distance>=10)
		{
			LCD_integerToString(Distance);
			LCD_displayCharacter(' ');
		}
		else if(Distance>=100 && Distance<= 400)
		{
			LCD_integerToString(Distance);
		}
		else if(Distance<10)
		{
			LCD_integerToString(Distance);
			LCD_displayCharacter('  ');
		}
	}
}
