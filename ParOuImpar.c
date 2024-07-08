#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//variáveis
	int numero;
	
	//entrada
	printf("Digite um numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	//processamento e saída
	if(numero%2 == 0){
		printf("o numero e par\n");
	}else{
		printf("o numero e impar\n");
	}
	
	
	return 0;
}