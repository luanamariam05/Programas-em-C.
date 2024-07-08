#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	// variáveis
	float media;
	int qtd_turma, alunos, i, soma=0;
	
	// entrada
	printf("Digite a quantidade de turmas: ");
	scanf("%i",&qtd_turma);
	fflush(stdin);
	
	for(i=1;i<=qtd_turma;i++){
		printf("Digite quantidade de alunos da turma %i: ",i);
		scanf("%i",&alunos);
		fflush(stdin);
		if(alunos>=1 && alunos<=40){
			soma+=alunos;
		}else{
			i--;
			printf("ERRO! As turmas nao podem ter mais que 40 alunos\n");
		}
	}
	
	// processamento
	media = (float) soma/qtd_turma;
	
	// saída
	printf("A media e %.2f\n",media);
	
	
	return 0;
}