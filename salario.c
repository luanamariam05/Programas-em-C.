#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int horas, valor;
	float salario;
	
	printf("Digite quanto voce ganha por hora: ");
	scanf("%i",&valor);
	fflush(stdin);
	printf("Quantas horas voce trabalha: ");
	scanf("%i",&horas);
	fflush(stdin);
	
	salario=(valor*horas)*30;
	
	printf("Voce ganha: R$ %.2f\n",salario);
	
	return 0;
}