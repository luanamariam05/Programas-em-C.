#include <stdio.h>
#include <stdlib.h>

//prototipo da função
int valida(int n);

int main(void){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	//if(!valida(numero)){
	if(valida(numero)){
		printf("O numero e impar\n");//par
	}else{
		printf("O numero e par\n");//ímpar
	}
	
	return 0;
}

//função valida
int valida(int n){
	if(n%2 == 0);
		return 0;
	}else{
		return 1;
}
 //int valida(int n){
	//return n%2;