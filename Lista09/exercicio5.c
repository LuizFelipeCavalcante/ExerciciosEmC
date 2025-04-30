#include <stdio.h>

void preencherValores(int *X){
    for(int i = 0; i < 10; i ++){
        scanf("%d", &X[i]);
    }
    return;
}

void copiaNegativos(int *X, int *negativo){
    int indice = 0;
    for(int i = 0; i < 10; i ++){
        if(X[i] < 0){
            negativo[indice] = X[i];
            indice++;
        }
    }
    negativo[indice] = 0;
    return;
}

int main(){
    int X[10], negativo[10];

    preencherValores(X);
    copiaNegativos(X, negativo);
    for(int i = 0; i < 10; i ++){
        if(negativo[i] != 0){
            printf("%d ", negativo[i]);
        }
    }
}