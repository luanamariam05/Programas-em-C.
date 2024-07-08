#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float cd, soma=0, media;
	int qtd_cd, i;
	
	// entrada
	printf("Digite a quantidade de cd's: ");
	scanf("%i",&qtd_cd);
	fflush(stdin);
	
	for(i=1;i<=qtd_cd;i++){
		printf("Digite o preco do cd %i: ",i);
		scanf("%f",&cd);
		fflush(stdin);
		soma+=cd;
	}
	
	// processamento
	media = soma/qtd_cd;
	
	// saída
	printf("A media e %.2f\n",media);
	printf("O preco investido e %.2f\n",soma);
	
	return 0;
}