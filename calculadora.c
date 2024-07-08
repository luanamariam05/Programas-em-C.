#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int opcao;
	float n1, n2
	
	printf("[1] - Adicao\n");
	printf("[2] - Subtracao\n");
	printf("[3] - Multiplicacao\n");
	printf("[4] - Divisao\n");
	printf("[5] - Fim\n");
	printf("Digite uma opcao: ");
	scanf("%i",&opcao);
	fflush(stdin);
	
	if(opcao>=1 && opcao<=5){
		switch(opcao!=5){
			printf("Digite 1 numero: ");
			scanf("%i",&n1);
			fflush(stdin);
			printf("Digite 2 numero: ");
			scanf("%i",&n1);
			fflush(stdin);
			case 1:
				r=n1+n2;
				printf("%f + %f = %f\n", n);
				break;
			case 2:
				break;
            case 3:
				break;
			case 4:
				break;
			case 5:
				break;
		}
	}else{
		printf("Erro! Opcao invalida\n");
	}
	
	
	
	return 0;
}