# include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int vetor[10];
    int contador = 0;
    srand(time(NULL)); 
    
    printf("Vetor original: ");
    for(int i = 0; i < 10; i++){
        vetor[i] = (rand() % (20 - 5 + 1)) + 5; ;
       if(vetor[i] % 2 == 0){
        contador ++;
       } 
       printf("%d ", vetor[i]);
    }  
    int vetorpar[contador];
    contador = 0;
    printf("Vetor par: ");

    for(int i = 0; i < 10; i++){
 
       if(vetor[i] % 2 == 0){
        vetorpar[contador] = vetor[i];
        printf("%d ", vetorpar[contador]);
        contador ++;
       } 
    }  
    return 0;
}