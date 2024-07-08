#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int i, soma;
	char opcao;
	
	do{	
		soma=0;
		for(i=100;i<=200;i+=2){
			soma+=i;
		}
		printf("O resultado e %i\n",soma);
		printf("Deseja repetir a operacao (s/n):")/
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao=='s');
	
	return 0;
}