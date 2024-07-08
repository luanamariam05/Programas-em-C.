#include <stdio.h>
#include <stdlib.h>

int mais(void){
	
	float metros;
	
	printf("Digite o valor em metros: ");
	scanf("%f",&metros);
	
	printf("O resultado em centimetros e: %.1f cm\n",metros*100);
	
	
	return 0;
}