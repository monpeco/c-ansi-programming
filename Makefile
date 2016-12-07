all: Fahrenheit_to_Celsius_v2.exe


Fahrenheit_to_Celsius_v2.exe: Fahrenheit_to_Celsius_v2.o
	gcc -o Fahrenheit_to_Celsius_v2.exe Fahrenheit_to_Celsius_v2.o
	
Fahrenheit_to_Celsius_v2.o: Fahrenheit_to_Celsius_v2.c
	gcc -c Fahrenheit_to_Celsius_v2.c
	
clean: 
	rm Fahrenheit_to_Celsius_v2.o Fahrenheit_to_Celsius_v2.exe