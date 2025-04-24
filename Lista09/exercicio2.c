# include <stdio.h>

void preencher(int*vetor){
    int numero = 0;
    for(int i = 0; i < 100; i++){
    while((i % 6 == 0) && (i % 10 == 6)){
        
        numero ++;
    }
    vetor[i] = numero;
    }
    return;
}

int main(){
    int vetor[100];
    preencher(&vetor);
    for(int i = 0; i < 100; i++){
        printf("%d", vetor[i]);
    }

    return 0;
}