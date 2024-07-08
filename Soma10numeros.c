//Como fazer para somar 10 números e mostrar eles em tela?
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	//variáveis
	int soma = 0, n[10];//n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
	
	//entrada
	for(int i=0;i<=9;i++){
		printf("Digite  n%i: ",i+1);
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	/*
	printf("Digite n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite n2: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("Digite n3: ");
	scanf("%i",&n3);
	fflush(stdin);
	printf("Digite n4: ");
	scanf("%i",&n4);
	fflush(stdin);
	printf("Digite n5: ");
	scanf("%i",&n5);
	fflush(stdin);
	printf("Digite n6: ");
	scanf("%i",&n6);
	fflush(stdin);
	printf("Digite n7: ");
	scanf("%i",&n7);
	fflush(stdin);
	printf("Digite n8: ");
	scanf("%i",&n8);
	fflush(stdin);
	printf("Digite n9: ");
	scanf("%i",&n9);
	fflush(stdin);
	printf("Digite n10: ");
	scanf("%i",&n10);
	fflush(stdin);	
	*/
	
	//processamento
	for(int i=0;i<=9;i++){
		soma+=n[i];//soma = soma +n[i];
	}
	//soma = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	
	//saída
	for(int i=0;i<=8;i++){
		printf("%i + ",n[i]);
	}
	printf("%i = %i",n[9],soma); //printf("%i + %i + %i + %i + %i + %i + %i + %i + %i + %i",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,soma);
	
	return 0;
}