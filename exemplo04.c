#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numero;
	
	printf("do while: \n");
	numero=10;
	do{
		printf("%i, ",numero);
		numero=numero+1;
	}while(numero<=10);
	
	printf("\while: \n");
	
	numero=11;
	while(numero<=10){
		printf("%i, ",numero);
		numero=numero+1;
	}
	
	
	printf("\for: \n");
	for(numero=11; numero<=10;numero=numero+1){
		printf("%i, ",numero);
	}

	
	return 0;
}