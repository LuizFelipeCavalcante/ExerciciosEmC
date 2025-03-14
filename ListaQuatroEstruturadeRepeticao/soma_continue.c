#include <stdio.h>

 int main(){
    int numero, soma = 0;

    for(int i = 0; i < 0; i++){
        printf("Digite num: ");
        scanf("%d", &numero);

        if(numero <= 0){
            continue; //Ele termina a interação atual, se chegar no continu tudo abaixo será ignorado
        }
        soma = soma + numero;
    }
    
    printf("A soma eh %d", soma);

    return 0;

 }