Mini Biblioteca Arduino para Display de Sete Segmentos 
=============

Requisitos
-------
- Display de 7 segmentos
- Circuito integrado 4511

Como usar
-------
Inclua a biblioteca no seu programa
```cpp
#include "MiniBiblioteca.h"
```

Depois, "set" os pinos do Circuito Integrado que estão ligados à protoboard
```cpp
DisplaySeven displayLed(3, 4, 5, 6); 
```

Comandos
-------
##### Você pode exibir um número de cada vez:
```cpp
displayLed.numberZero(); //O padrão de delay é 1000
displayLed.numberZero(300); //Você pode modificar o tempo do delay!
```
Outros números:
- numberOne()
- numberTwo()
- numberThree()
- numberFour()
- numberFive()
- numberSix()
- numberSeven()
- numberEight()
- numberNine()

#####Você pode escolher um intervalo de números para mostrar
```cpp
displayLed.chooseNumbers(2, 5); //O display mostrará os números de 2 a 5, com um delay de cada número com padrão de 1000
displayLed.chooseNumbers(2, 5, 400); //Você pode modificar o tempo do delay!
```

#####Você também pode mostrar todos os números de 0 a 9 de uma vez :D
```cpp
displayLed.allNumbers(); 
displayLed.allNumbers(400); //Se quiser, mude o tempo do delay de cada número!
```
