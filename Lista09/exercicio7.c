#include <stdio.h>
#include <stdlib.h>  
#include <time.h>  
#define MAX 100

void somaDiagonalPrincipal(int matriz[][MAX], int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                soma += matriz[i][j];
            }
        }
    }
    printf("%d", soma);
}

void somaAbaixoDiagonal(int matriz[][MAX], int n){
    int soma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i > j){
                soma += matriz[i][j];
            }
        }
    }
    printf("%d", soma);
}

void preencherMatriz(int matriz[][MAX], int n){
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = (rand() % 100) + 1;
        }
    }
}


int main(){
    srand(time(NULL));

    int matriz[MAX][MAX];
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    preencherMatriz(matriz, n);
    somaDiagonalPrincipal(matriz, n);
    somaAbaixoDiagonal(matriz, n);
    return 0;
}