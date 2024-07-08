#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float fahrenheit, celsius;


	printf(" Digite a temperatura em F (Fahrenheit)\n");
	scanf ("%f", &fahrenheit);
	celsius = 5*(fahrenheit-32)/9;
	printf("A temperatura em C e: %f", celsius );
	
	
	return 0;
}