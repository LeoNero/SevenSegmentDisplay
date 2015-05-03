#ifndef MiniBiblioteca_h

#define MiniBiblioteca_h

#include <Arduino.h>

class DisplaySeven
{
	public:
		DisplaySeven(int pinA, int pinB, int pinC, int pinD);
		
		void numberZero(float timer = 1000);
		void numberOne(float timer = 1000);
		void numberTwo(float timer = 1000);
		void numberThree(float timer = 1000);
		void numberFour(float timer = 1000);
		void numberFive(float timer = 1000);
		void numberSix(float timer = 1000);
		void numberSeven(float timer = 1000);
		void numberEight(float timer = 1000);
		void numberNine(float timer = 1000);

		void chooseNumbers(int numberFirst, int numberSecond, float timer = 1000);

		void allNumbers(float timer = 1000);
	
	private:
		int _pinA;
		int _pinB;
		int _pinC;
		int _pinD;

		void displayNumber(int number);
		void binaryToDisplay(int statePinA, int statePinB, int statePinC, int statePinD);
};

#endif

