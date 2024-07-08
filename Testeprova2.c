#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x;
	
	do{
		printf("Digite um numero inteiro positivo: ");
		scanf("%i",&x); //alteração}
		
	}while(x <= 0);

	return 0;
}