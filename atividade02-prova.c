#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n1,n2;
	
	printf("Digite um numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite um numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	if(n1>n2){
		printf("%i e o maior\n",n1);
	}else{
		if(n1==n2){
			printf("Os dois numeros sao iguais\n");
	}else{
		printf("%i e o maior\n",n2);
		}
	}
	
	
	return 0;
}