# include <stdio.h>

void preencher(int *vetor){
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
}

int menorF(int *vetor){
    int menor = vetor[0], indice;
    for(int i = 0; i < 5; i++ ){
        if(vetor[i] < menor){
            indice = i;
        }
    }
    return indice;
}

void troca(int *vetor){
    int indice = menorF(vetor), a;
    a = vetor[0];
    vetor[0] = vetor[indice];
    vetor[indice] = a;

    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
}