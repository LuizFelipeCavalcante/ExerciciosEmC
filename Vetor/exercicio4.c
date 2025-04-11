#include <stdio.h>

int main(){
    int vetor[10];
    int contador = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            contador ++;
        }
    }  
    printf("%d", contador);
    return 0;
}