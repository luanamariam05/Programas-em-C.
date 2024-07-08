#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float Fahrenheit, Celsius;
	
	
	printf("Digite a temperatura em C(Celsius)\n");
	scanf("%f",&Celsius);
	Fahrenheit = (Celsius * 1.8) + 32;
	printf("A temperatura em F e: %f", Fahrenheit);
	
	return 0;
}