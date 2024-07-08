#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n1, n2, n3;
	
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 1 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("Digite 1 numero: ");
	scanf("%i",&n3);
	fflush(stdin);
	
	if (n1 <= n2 && n2 <= n3){
		printf("A ordem crescente: %i %i %i\n", n1, n2, n3);
    }else{
		if (n1 <= n3 && n3 <= n2){
      		printf("A ordem crescente: %i %i %i\n", n1, n3, n2);
    }else{
		if (n2 <= n1 && n1 <= n3){
      		printf("A ordem crescente: %i %i %i\n", n2, n1, n3);
    }else{
  		if (n2 <= n3 && n3 <= n1){
      		printf("A ordem crescente: %i %i %i\n", n2, n3, n1);
    }else{
		if (n3 <= n1 && n1 <= n2){
      		printf("A ordem crescente: %i %i %i\n", n3, n1, n2);
    }else{ /* n3 <= n2 && n2 < n1 */
      		printf("A ordem crescente: %i %i %i\n", n3, n2, n1);
    	}
    	}	
    	}
    	}
	}

	
	return 0;
}