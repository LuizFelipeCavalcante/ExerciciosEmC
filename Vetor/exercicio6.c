#include <stdio.h>

int main(){
    
    int vetor[15];
    int soma = 0;
    for(int i = 0; i < 15; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 != 0){
            soma += vetor[i];
        }
    }  
    printf("Soma dos numeros impares: %d", soma);
    return 0;
}