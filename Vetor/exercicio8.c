#include <stdio.h>

int main(){

    int vetorum[10];
    int vetordois[10];
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetorum[i]);
    }  

    int contador = 0;
    printf("\n Vetor dois: ");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vetordois[i]);
        for(int j = 0; j < 10; j++){
            if(vetorum[j] == vetordois[i]){
                contador++;
            }
        }
    }  
    int vetori[contador];
    int contadordois = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(vetorum[j] == vetordois[i]){
                vetori[contadordois];
                contadordois++;
            }
        }
    }  
    for(int i = 0; i < contador; i++){
        printf("%d ", vetori[i]);
    }  

    return 0;
}