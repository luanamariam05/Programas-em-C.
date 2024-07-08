#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	numero=numero+1;
	
	printf("O numero e %i\n", numero);
	 
	return 0;
}