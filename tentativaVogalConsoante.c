#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	switch (letra){
		case 'A':case 'a':
			printf("Vogal\n");
			break;
		case 'E':case 'e':
			printf("Vogal\n");
			break;
		case 'I':case 'i':
			printf("Vogal\n");
			break;
		case 'O':case 'o':
			printf("Vogal\n");
			break;
		case 'U':case 'u':
			printf("Vogal\n");
			break;
		default:
			printf("Consoante\n");
	}
	
	return 0;
}