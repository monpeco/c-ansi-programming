all: Fahrenheit_to_Celsius_v2


%: %.cc
	g++ -std=c++11 $< -o $@
	

%: %.c
	gcc $< -o $@