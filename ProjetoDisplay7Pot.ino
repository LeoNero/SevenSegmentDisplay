#include "SevenSegment.h"

SevenSegment displayLed(3, 4, 5, 6); 

void setup() 
{
}

void loop() 
{
	displayLed.numberZero(); 
	displayLed.numberOne(500); 

	displayLed.chooseNumbers(4, 8); 
	displayLed.chooseNumbers(4, 8, 300); 

	displayLed.allNumbers(); 
	displayLed.allNumbers(500); 
}
