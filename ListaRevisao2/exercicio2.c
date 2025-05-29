#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int *pares;
    int n = 0;
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] %2 == 0){
            n++;
        }
    }

    pares = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            *pares = vetor[i];
            printf("%d ", *pares);
            pares++;
        }
    }

  
    return 0;
}