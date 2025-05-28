#include <stdio.h>


int verifica(char*palavra){
    int tamanho = 0;
   
    for(int i = 0; palavra[i] != '\0'; i++){
        tamanho ++;
    }
    int j = tamanho - 1;

    for(int i = 0; i < j; i++){
        if(palavra[i] != palavra[j]){
            return 0;
        }
        j --;
    }
    return 1;
    
}


int main(){

    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%[^\n]", palavra);
    
    if(verifica(palavra)){
        printf("True");
    }else{
        printf("False");
    }
    

    return 0;
}
