#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char vetor[10];
	
	for(int i=0;i<=9;i++){
		printf("Digite caractere %i: ",i+1);
		scanf("%c",&vetor[i]);
		fflush(stdin);
	}
	if(vetor[i]!='a' ||vetor[i]!='A' ||vetor[i]!='e' ||vetor[i]!='E' ||vetor[i]!='i' ||vetor[i]!='I' ||vetor[i]!='o' ||vetor[i]!='O' ||vetor[i]!='u' ||vetor[i]!='U'){
		vetor[i]=vetor[i];
	}else{
		printf("%c",vetor[i]);
		int i=0;
		i++;
	}	
	return 0;
}