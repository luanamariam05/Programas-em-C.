#include <stdio.h>
#include <stdlib.h>

//prototipo função
void limpar_tela(void);//sem saída e sem entrada
int soma(int n1, int n2);//com saída e com entrada

int main(void){

	limpar_tela();
	printf("%i",soma(1,2));
	
	return 0;
}

//funções
void limpar_tela(void){
	system("color 71");
	system("cls");
}

int soma(int n1, int n2){
	int r;
	r=n1+n2;
	return r;
}