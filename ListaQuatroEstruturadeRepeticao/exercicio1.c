#include <stdio.h>

int main(){

    int n;
    int soma;
    int numero;
    int contador = 0;

    printf("Digite a quantidade de numeros que deseja informar: ");
    scanf("%d",&n);

    while(contador < n)
  {
    printf("Digite o numero: ");
    scanf("%d", &numero);
    soma += numero;
    contador ++;
  }
  printf("Total: %d", soma);

    return 0;
}