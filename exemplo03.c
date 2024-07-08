#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numero;
	
	numero=1;
	do{
		printf("%i, ",numero);
		numero=numero+1;
	}while(numero<=10);
	
	return 0;
}