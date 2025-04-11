#include <stdio.h>

int main(){
    int vetorum[5];
    int vetordois[5];
    printf("Vetorum: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetorum[i]);
    }  
    printf("Vetor dois: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &vetordois[i]);
    }  
    int vetorsoma[4];
    for(int i = 0; i < 5; i++){
       vetorsoma[i] = vetorum[i] + vetordois[i];
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", vetorsoma[i]);
    } 
    return 0;
}