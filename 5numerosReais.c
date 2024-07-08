#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float vetor[5], soma=0, mult=1;
	
	// entrada
	for(int i=0;i<5;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&vetor[i]);
		fflush(stdin);
	}
	
	// processamento
	for(int i=0;i<5;i++){
		soma+=vetor[i];
		mult*=vetor[i];
	}
	
	// saída
	printf("A soma e %f\n",soma);
	printf("A multiplicacao e %f\n",mult);
	printf("Os numeros sao: ");
	for(int i=0;i<5;i++){
		printf("%f, ",vetor[i]);
	}
	
	return 0;
}