#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numero, r1, r2;
 
    printf("Digite um numero: ");
    scanf("%i",&numero);
    fflush(stdin);
    
    r1= numero+1;
    r2= numero-1;
    
    if(numero%2==0){
		printf("Resultado: \n", r1);
	}else{
		printf("Resultado: \n", r2);
	}
	
	return 0;
}
