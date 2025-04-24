# include <stdio.h>

void preencher(int *vetor){
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
}

int menorF(int *vetor){
    int menor, indice;
    for(int i = 0; i < 5; i++ ){
        if(vetor[i] < menor){
            indice = i;
        }
    }
    return indice;
}

void troca(int *vetor){
    int indice = menorF(&vetor);
    
}