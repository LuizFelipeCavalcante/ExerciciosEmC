#include <stdio.h>
#include <stdlib.h>  
#include <time.h>  

void preencherMatriz(int *matriz, int n){
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matriz[i][j] = (rand() % 100) + 1;
        }
    }
}


int main(){
    srand(time(NULL));

    int matriz[100];
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", n);

    preencherMatriz(matriz, n);

    return 0;
}