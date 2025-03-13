#include <stdio.h>

int main(){

    int n;
    int cont;
    do{
    printf("Digite o numero: ");
    scanf("%d", &n);
    if(n % 2 == 0){
        cont ++;
    }
    }while(n != 0);
    cont --;
    printf("Tem %d numeros pares", cont);
    return 0;
}