#include <stdio.h>
#include <stdlib.h>

//prototipo função
void limpar_tela(void);//sem saída e sem entrada

int main(void){

	limpar_tela();
	
	return 0;
}

//funções
void limpar_tela(void){
	system("color 71");
	system("cls");
}