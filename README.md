Seven Segment Display 
=============

Requirements 
-------
- Seven Segment Display 
- IC 4511

How to use
-------
Include the library in your project
```cpp
#include "MiniBiblioteca.h"
```
After that, set the IC's pins that are connected to the Arduino
```cpp
DisplaySeven displayLed(3, 4, 5, 6); 
```

Commands
-------
##### You can display a number at a time:
```cpp
displayLed.numberZero(); //Standard delay is 1000
displayLed.numberZero(300); //You can modify the delay!
```
Other numbers:
- numberOne()
- numberTwo()
- numberThree()
- numberFour()
- numberFive()
- numberSix()
- numberSeven()
- numberEight()
- numberNine()

#####You can set a interval of numbers to display
```cpp
displayLed.chooseNumbers(2, 5); //The display will show the números de 2 a 5, com um delay de cada número com padrão de 1000
displayLed.chooseNumbers(2, 5, 400); //Você pode modificar o tempo do delay!

displayLed.chooseNumbers(8, 4); //No caso, será mostrado os números de 4 a 8 em ordem decrescente
```

#####Você também pode mostrar todos os números de 0 a 9 de uma vez :D
```cpp
displayLed.allNumbers(); 
displayLed.allNumbers(400); //Se quiser, mude o tempo do delay de cada número!
```
