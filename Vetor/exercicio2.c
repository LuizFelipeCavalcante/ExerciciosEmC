# include <stdio.h>

int main(){
    float vetor[10];
    for(int i = 0; i < 10; i++){
        scanf("%f", &vetor[i]);
    }  
    float maior = 0;
    int posicao = 0;
    for(int i = 0; i < 10; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
            posicao = i;
        }
    }      
    printf("Maior valor: %f na posicao %d", maior, posicao);
    return 0;
}