#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n1, n2;
	float n3, r1, r2, r3;
	
	printf("Digite um numero inteiro: ");
	scanf("%i", &n1);
	printf("Digite um numero inteiro: ");
	scanf("%i", &n2);
	printf("Digite um numero real: ");
	scanf("%f", &n3);
	
	r1 = (2 * n1) + ((float)n2/2);
	r2 = (3 * n1) + n3;
	r3 = n3 * n3 * n3;
	
	printf("%f", &r1);
	printf("%f", &r2);
	printf("%f", &r3);
	
	
	
	return 0;
}