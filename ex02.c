#include <stdio.h>
#include <stdlib.h>
//protótipo
void desenhe(char c, int n);

int maim(void){
	desenhe('_',10);
	
	return 0;
}

//função desenhe
void desenhe(char c, int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=57;j++){
			printf("%c",c);
			
			printf("\n");
		}
	}
}