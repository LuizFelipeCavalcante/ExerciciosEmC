#include <stdio.h>
// a funcao recebe smp o endereço do vetor
int somaIterativaIndices(int vetor[], int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += vetor[i];
    }
    return soma;
}
// na pratica, ambas funções recebem o endereço do vetor
int somaIterativaPonteiros(int *vetor, int tam){
 int soma = 0;
 int *p;
 for(p = vetor; p < vetor + tam; p++){

 }
}