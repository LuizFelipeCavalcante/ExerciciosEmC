#include <stdio.h>

int main(){

    int vetor[5];
   
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }  
    
    for(int i = 0; i < 5; i++){
        int quantidade = 0;

        for(int j = i; j < 5; j++){
            if (vetor[i] == vetor[j]){
                quantidade ++;
            }
        }
        
        if(quantidade >= 2){
            printf("O numero %d, aparece %d vezes \n",vetor[i], quantidade);
        }
    }
    return 0;
}