#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char palavra[15][30];
	
	for(int i=0;i<15;i++){
		printf("Digite %i palavra: ",i+1);
		gets(palavra[i]);
		fflush(stdin);
	}

	for(int i=14;i>=0;i--){
		printf("%s\n",palavra[i]);
	}
	
	return 0;
}