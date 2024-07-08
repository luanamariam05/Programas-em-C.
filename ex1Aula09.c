#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numero1, numero2, i;
	
	printf("Digite um numero: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite outro numero: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	if(numero1<numero2){
		for(i=numero1+1;i<numero2;i++){
			if(i%2 == 0)
				printf("%i, ",i);
		}
	}else{
		for(i=numero1-1;i>numero2;i--){
			printf("%i, ",i);
		}
	}
	
	return 0;
}