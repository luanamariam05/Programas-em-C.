#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
	if((letra >= 'a' && letra <='z') || (letra >= 'A' && letra <='Z')){
		if(letra >= 'A' && letra <= 'Z'){
			letra = letra+('a'-'A');
		}
		if(letra == 'a'|| letra == 'e'|| letra == 'i' || letra == 'o' || letra == 'u');
			printf("A letra e uma vogal\n");
		}else{
			printf("A letra e uma consoante\n");
		}
	}
	
	return 0;
}