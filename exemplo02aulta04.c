#include <stdio.h>
#include <stdlib.h>

int main(void){
    //variáveis
    int numero;
    
    //entrada
    printf("Digite um numero: ");
    scanf("%i",&mumero);
    fflush(stdin);
    
    //processamento e saída
    switch(numero){
    	case 1:
    		printf("UM\n");
    		break;
        case 2:
        	printf("DOIS\n");
        	break;
        case 3: 
            printf("TRES\n");
            break;
        default:
        	printf("NAO TENHO O NUMERO\n");
	}
	
	return 0;
}