#include "MiniBiblioteca.h"

DisplaySeven displayLed(3, 4, 5, 6);

void setup() 
{
}

void loop() 
{
	displayLed.numberZero(); //Exibirá o numero 0 no display de 7 segmentos
	displayLed.numberOne(500); //Você tambem pode escolher o delay da exibicao. Padrao é 1000

	displayLed.chooseNumbers(4, 8); //Você pode escolher os numeros que quer exibir em um intervalor. No caso, de 4 a 8
	displayLed.chooseNumbers(4, 8, 300); //Voce tambem pode escolher o tempo do delay. Padrao é 1000 

	displayLed.allNumbers(); //Exibirá todos os números (de 0 a 9)
	displayLed.allNumbers(500); //Você também pode escolher o tempo do delay. Padrao é 1000
}
