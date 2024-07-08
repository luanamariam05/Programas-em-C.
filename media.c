#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float nota1, nota2, nota3, media;
	
	printf("Digite 1 nota: ");
	scanf("%f",&nota1);
	printf("Digita a 2 nota: ");
	scanf("%f",&nota2);
	printf("Digita a 3 nota: ");
	scanf("%f",&nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	printf("Sua media e: %.2f\n",media);
	
	if(media >= 7){
		printf("Aprovado\n");
	}else{
		if(media == 10){
			printf("Aprovado com Distinção\n");
	}else{
		printf("Reprovado\n");
		}
	}
	
	return 0;
}