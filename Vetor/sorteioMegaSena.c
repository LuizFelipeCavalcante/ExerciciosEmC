#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jasorteado(int v[], int tam, int num){
    for(int i = 0; i < tam; i++){
        if(v[i] == num){
            return 1;
        }
    }
    return 0;
}


int main(){

    int vetor[6];
    int num;
    srand(time(NULL));

    for(int i = 0; i < 6; i++){
        do{
            num = rand() % 60 + 1;
        }while(jasorteado(vetor[i], i, num));
        vetor[i] = num;
    }
    return 0;
}