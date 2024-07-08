#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//variáveis
	int n1, n2;
	
	//entrada
	printf("Digite N1: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("Digite N2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	//processamento e saída
	if(n1 > n2){
		printf("O N1 e o maior\n");
	}else{
		if(n2 > n1){
			printf("O N2 e o maior\n");
		}else{
			printf("Os numeros sao iguais\n");
		}
	}
	
	return 0;
}