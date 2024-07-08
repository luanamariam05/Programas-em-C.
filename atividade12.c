#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int q;
	
	printf("Digite a quantidade de maquinas: ");
	scanf("%i",&q);
	fflush(stdin);
	
	printf("-----quantidade-----\n");
	printf("20cv \t1cv \t5cv\n");
	printf("%i \t%i \n\n", q,2*q,3*q);
	
	printf("-------compra-------");
	printf("valor total por maquina %.2f\n\n",(float)(1500+2*300+3*600));
	printf("20cv \t1cv \t5cv\n");
	printf("%i \t%i \t%i\n\n", 1500,2*300,3*600);
	printf("valor total da compra %.2f\n",(float)(q*1500+q*2*300+q*3*600));
	
	return 0;
}