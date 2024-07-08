#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int dias;
	float salario, valor;
	
	printf("Digite quantos dias voce trabalha no mes: ");
	scanf("%i",&dias);
	fflush(stdin);
	
	salario=250*dias*0.92;
	
	printf("O valor liquido ganhado e: R$ %.2f\n",salario);
	
	return 0;
}