#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num_secreto, tentativa;
    srand(time(NULL));
    num_secreto = rand() % 100 + 1;
    printf("Adivinhe o numero. ");
    while(1){

        printf("Digite um palpite: ");
        scanf("%d", &tentativa);
        
        if(tentativa > num_secreto)
        printf("Valor alto. ");
        
        else if(tentativa < num_secreto)
            printf("Valor baixo. ");
        
        else{
            printf("Parabens!");
            break;

        }
    }
    return 0;
}