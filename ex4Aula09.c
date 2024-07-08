#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float nota, soma=0, media;
	int qtd_notas, i;
	
	// entrada
	printf("Digite a quantidade de notas: ");
	scanf("%i",&qtd_notas);
	fflush(stdin);
	
	for(i=1;i<=qtd_notas;i++){
		printf("Digite %i nota: ",i);
		scanf("%f",&nota);
		fflush(stdin);
		soma+=nota;
	}
	
	// processamento
	media = soma/qtd_notas;
	
	// saída
	printf("A media e %.2f\n",media);
	
	return 0;
}