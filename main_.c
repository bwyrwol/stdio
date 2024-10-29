#include "main.h"
#include <util/delay.h>
#include <avr/io.h>
#include "pcf8574.h"
#include "twi.h"
#include "lcd.h"

#include <stdio.h>
#include <avr/pgmspace.h>

int main(void)
{
	TWI_init();
	LCD_Init();
	
	LCD_WriteText("test...");

	while (1) 
  {
  }
  
}
