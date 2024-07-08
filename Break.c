#include <stdio.h>
#include <stdlib.h>

int main(void){

	int x = 0;
	
	printf("Valor de x: ");
	scanf("%i",&x);
	fflush(stdin);
	
	while (x < 5){
		if(x == 3){
			printf("x e igual a 3");
			break;
		}
		x = x + 1;
	}
	printf("Fora do laco while");
		
	return 0;
}