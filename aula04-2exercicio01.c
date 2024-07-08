#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char letra;
	
	printf("Qual seu sexo? Digite F para feminino e M para masculino: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	switch(letra){
		case 'f':case 'F':
			printf("Feminino\n");
			break;
		case 'm': case 'M':
			printf("Masculino\n");
			break;
		default:
			printf("sexo invalido\n");
	}	
	
	return 0;
}