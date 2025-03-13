#include <stdio.h>

int main(){

    int n;
    int numero = 1;
    int contador = 0;

    printf("Digite a quantidade de numeros que deseja informar: ");
    scanf("%d",&n);

    while(contador < n)
  {
    printf("%d, ", numero);
    numero += 2;
    
    contador ++;
  }

    return 0;
}