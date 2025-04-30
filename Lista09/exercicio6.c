#include <stdio.h>

int main(){
    int matriz[2][3];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor pra posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n Matriz original: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz transposta: \n");
    int matrizTransposta[3][2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            matrizTransposta[i][j] = matriz[j][i];
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    int soma = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        } 
    }
    printf("A soma dos elementos é: %d", soma);
    return 0;
}