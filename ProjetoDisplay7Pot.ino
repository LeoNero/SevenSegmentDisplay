// ProjetoDisplay7Pot.ino

#include "MiniBiblioteca.h"

const int a = 3;
const int b = 4;
const int c = 5;
const int d = 6;

const int Buzzer = 8;

const int LedAmarelo = 10;
const int LedVerde = 11;

const int Potenciometro = A0;

int pwm = 0;
int valorPot = 0;
int valorDisplay = 0;

void setup() {
	pinMode(a, OUTPUT);
	pinMode(b, OUTPUT);
	pinMode(c, OUTPUT);
	pinMode(d, OUTPUT);

	pinMode(Buzzer, OUTPUT);

	pinMode(LedAmarelo, OUTPUT);
	pinMode(LedVerde, OUTPUT);

	pinMode(Potenciometro, INPUT);

	Serial.begin(9600);
}

void loop() {

	valorPot = analogRead(Potenciometro);
	pwm = transformaEscala(valorPot, 0, 1023, 0, 255);
	valorDisplay = transformaEscala(valorPot, 0, 1023, 0, 9);

	Serial.print("Valor do potenciometro: ");
	Serial.println(valorPot);

	Serial.print("Valor do PWM: ");
	Serial.println(pwm);

	Serial.print("Valor para mostrar no display: ");
	Serial.println(valorDisplay);

	Serial.println(" ");

	if (valorDisplay < 5) {
		digitalWrite(LedVerde, LOW);
		analogWrite(LedAmarelo, pwm);
	} else {
		digitalWrite(LedAmarelo, LOW);
		analogWrite(LedVerde, pwm);
	}

	mostrarNumeroNoDisplay(valorDisplay, a, b, c, d);

	if (valorDisplay == 9) {
		digitalWrite(Buzzer, HIGH);	
	} else {
		digitalWrite(Buzzer, LOW);	
	}
}
