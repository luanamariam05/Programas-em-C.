#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float vetor[10];
	
	for(int i=0;i<10;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&vetor[i]);
		fflush(stdin);
	}

	for(int i=9;i>=0;i--){
		printf("%f\n",vetor[i]);
	}
	
	return 0;
}