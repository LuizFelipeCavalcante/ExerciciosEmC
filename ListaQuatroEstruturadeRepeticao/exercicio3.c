#include <stdio.h>

int main(){

    int n;
    int numero = 1;
    int contador = 0;

    printf("Digite a quantidade de numeros que deseja: ");
    scanf("%d",&n);

    while(contador < n)
  {
    
    while(((numero % 3 == 0) & (numero % 5 == 0)) || (numero % 7 == 0) ){
        
        printf("%d, ", numero);
        numero ++;
        contador ++;
    }

    
    numero ++;
    
  }

    return 0;
}