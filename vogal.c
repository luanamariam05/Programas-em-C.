#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	switch(letra){
		case 'a':case 'A':
			printf("Vogal\n");
			break;
		case 'e': case 'E':
			printf("Vogal\n");
			break;
		case 'i':case 'I':
			printf("Vogal\n");
			break;
		case 'o':case 'O':
			printf("Vogal\n");
			break;
		case 'u':case 'U':
			printf("Vogal\n");
			break;
		default:
			printf("Consoante\n");
	}	
	
	
	
	return 0;
}