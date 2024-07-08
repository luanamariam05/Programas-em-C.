#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	float raio, areadocirculo, pi=3.14;
	
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	fflush(stdin);
	
	areadocirculo=pi*raio*raio;
	
	printf("A area e: %f\n", areadocirculo);
	
	return 0;
}