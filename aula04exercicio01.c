#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int valor;
	
	printf("Digite o valor: ");
	scanf("%i",&valor);
	fflush(stdin);
	
	if(valor>0){
		printf("Seu valor e positivo\n");
	}else{
		if(valor<0){
			printf("Seu valor e negativo\n");
	}else{
			printf("Seu valor e neutro\n");
		}
	}
	
	return 0;
	
}