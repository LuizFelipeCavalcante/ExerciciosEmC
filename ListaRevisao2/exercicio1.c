#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));    
    int vet[20];

    for(int i = 0; i < 20; i++){
        vet[i] = rand()%100+1;
        int j = 0;
        if(i > 0){
            while(vet[j]==vet[i]){
                while(vet[j] == vet[i]){
                vet[i] = rand()%100+1;
                }
                j++;
            }
        }
    }
    return 0;
}