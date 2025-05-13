#include <stdio.h>

int main(){
    int copias; 
    float valor;
    while(1){
        scanf("%d", &copias);
        if(copias < 0) break;
        if(copias <= 100){
            valor = (float)copias*0.25;
        }
        else{
            valor = (float)copias*0.20;
        }

        printf("%.2f", valor);
        printf("\n");
    }
    return 0;
}