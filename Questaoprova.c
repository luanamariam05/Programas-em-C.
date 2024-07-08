#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int f1=0, f2=1, r=1, i;
	
	for(i=1;i<=6;i++){
		printf("%i, ",r);
		r=f1+f2;
		
		if(f1<f2){
			f1=r;
		}else{
			f2=r;
		}
	}

	return 0;
}