#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int total = 0, num;
  
  	while( total < 20 ) {
    	printf( "Total = %d\n", total );
    
    	printf( "Entre com um numero: " );
   		scanf( "%d", &num );
    
    	total += num;
  	}
  
 	 printf( "Final total = %d\n", total );
	
	return 0;
}

