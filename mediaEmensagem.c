/*Construa um programa que leia 3 notas e calcule a média delas e imprima mensagem de Aprovado, Reprovado e Aprovado com distinção*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float nota1, nota2, nota3, media;
	
	printf("Digite nota 1: ");
	scanf("%f",&nota1);
	fflush(stdin);
	printf("Digite nota 2: ");
	scanf("%f",&nota2);
	fflush(stdin);	
	printf("Digite nota 3: ");
	scanf("%f",&nota3);
	fflush(stdin);
	
	media=(nota1+nota2+nota3)/3;
	
	printf("Sua media e: %.2f\n",media);
	
	if(media >= 7){
		printf("Aprovado\n");
	}else{
		if(media == 10){
			printf("Aprovado com distincao\n");
	}else{
		printf("Reprovado\n");
		}
	}
		
	return 0;
}