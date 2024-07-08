#include <stdio.h>
#include <stdlib.h>
 
int main(void){
 
    float numero;
 
    printf("Digite um numero: ");
    scanf("%f", &numero);
 
    if (numero == (int)numero) {
        printf("O numero %.2f é inteiro.\n", numero);
    } else {
        printf("O numero %.2f é quebrado.\n", numero);
    }
 
    return 0;
}