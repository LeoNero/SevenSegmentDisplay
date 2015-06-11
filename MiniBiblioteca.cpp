#include "MiniBiblioteca.h"

DisplaySeven::DisplaySeven(int pinA, int pinB, int pinC, int pinD) 
{
	pinMode(pinA, OUTPUT);
	pinMode(pinB, OUTPUT);
	pinMode(pinC, OUTPUT);
	pinMode(pinD, OUTPUT);

	_pinA = pinA;
	_pinB = pinB;
	_pinC = pinC;
	_pinD = pinD;
}

void DisplaySeven::binaryToDisplay(int statePinA, int statePinB, int statePinC, int statePinD) 
{
	digitalWrite(_pinA, statePinA);
	digitalWrite(_pinB, statePinB);
	digitalWrite(_pinC, statePinC);
	digitalWrite(_pinD, statePinD);
}

void DisplaySeven::displayNumber(int number) {
	switch(number) {
		case 0:
			binaryToDisplay(0, 0, 0, 0);
			break;
		
		case 1:
			binaryToDisplay(1, 0, 0, 0);
			break;

		case 2:
			binaryToDisplay(0, 1, 0, 0);
			break;

		case 3:
			binaryToDisplay(1, 1, 0, 0);
			break;

		case 4:
			binaryToDisplay(0, 0, 1, 0);
			break;

		case 5:
			binaryToDisplay(1, 0, 1, 0);
			break;

		case 6:
			binaryToDisplay(0, 1, 1, 0);
			break;

		case 7:
			binaryToDisplay(1, 1, 1, 0);
			break;

		case 8:
			binaryToDisplay(0, 0, 0, 1);
			break;

		case 9:
			binaryToDisplay(1, 0, 0, 1);
			break;
	}
}


/*
*/

void DisplaySeven::numberZero(float timer) {
	displayNumber(0);
	delay(timer);	
}

void DisplaySeven::numberOne(float timer) {
	displayNumber(1);
	delay(timer);	
}

void DisplaySeven::numberTwo(float timer) {
	displayNumber(2);
	delay(timer);	
}

void DisplaySeven::numberThree(float timer) {
	displayNumber(3);
	delay(timer);	
}

void DisplaySeven::numberFour(float timer) {
	displayNumber(4);
	delay(timer);	
}

void DisplaySeven::numberFive(float timer) {
	displayNumber(5);
	delay(timer);	
}

void DisplaySeven::numberSix(float timer) {
	displayNumber(6);
	delay(timer);	
}

void DisplaySeven::numberSeven(float timer) {
	displayNumber(7);
	delay(timer);	
}

void DisplaySeven::numberEight(float timer) {
	displayNumber(8);
	delay(timer);	
}

void DisplaySeven::numberNine(float timer) {
	displayNumber(9);
	delay(timer);	
}


/*
 */
void DisplaySeven::chooseNumbers(int numberFirst, int numberSecond, float timer) {

	if (numberSecond > numberFirst) {
		for (int i = numberFirst; i <= numberSecond; i++) {
			displayNumber(i);
			delay(timer);
		}
	} else if (numberFirst > numberSecond) {
		for (int i = numberFirst; i >= numberSecond; i--) {
			displayNumber(i);
			delay(timer);
		}
	}
}


/*
*/
void DisplaySeven::allNumbers(float timer) {
	for (int i = 0; i < 10; i++) {
		displayNumber(i);
		delay(timer);
	}	
}
