//como fazer uma soma de duas matriz 3x3?
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int mat_a[3][3], mat_b[3][3], mat_s[3][3];
	
	// entrada
	printf("Dados Matriz A: \n\n");
	for(int linha=0;linha<=2;linha++){
		for(int coluna=0;coluna<=2;coluna++){
			printf("Digite [%i][%i]: ",linha,coluna);
			scanf("%i",&mat_a[linha][coluna]);
			fflush(stdin);
		}
	}
	printf("\n\nDados Matriz B: \n\n");
	for(int linha=0;linha<=2;linha++){
		for(int coluna=0;coluna<=2;coluna++){
			printf("Digite [%i][%i]: ",linha,coluna);
			scanf("%i",&mat_b[linha][coluna]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(int linha=0;linha<=2;linha++){
		for(int coluna=0;coluna<=2;coluna++){
			mat_s[linha][coluna]=mat_a[linha][coluna]+mat_b[linha][coluna];
		}
	}
	
	// saída
	printf("\n\nDados Matriz S: \n\n");
	for(int linha=0;linha<=2;linha++){
		for(int coluna=0;coluna<=2;coluna++){
			printf("%i\t",mat_s[linha][coluna]);
		}
		printf("\n");
	}
	
	return 0;
}