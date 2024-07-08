#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i, ant1=1, ant2=0, x, atual;
	
	printf("Quantidade da sequencia: ");
	scanf("%i",&x);
	printf("Sequencia de Fibonacci: \n");
	printf("%i ",ant2);
	printf("%i ",ant1);
	
	for(i=3;i<=x;i++){
		atual=ant2+ant1;
		printf("%i ",atual);
		ant2=ant1;
		ant1=atual;
	}
	
	
	return 0;
}