# include <stdio.h>

int main(){
   
    int numero;
    int somatorio;
    int contador = 0;
    do{
        printf("Digite um numero: ");
        scanf("%d", &numero);
        somatorio += numero;
        contador ++;
    } while(numero != 0 );
    printf("%d \n", somatorio);
    printf("%d", somatorio/(contador-1));
}