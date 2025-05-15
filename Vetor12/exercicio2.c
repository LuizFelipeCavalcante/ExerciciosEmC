#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_elementos(int *inteiros, int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++){
        soma += inteiros[i];
    }
    return soma;
}



int main(){
    srand(time(NULL));

    int numero = rand();
    int *mil;

    mil = (int *)malloc(1000 * sizeof(int));


for(int i = 0; i < 1000; i++){
   numero = rand() % 10 + 1;
    mil[i] = numero;
    
}
printf("%d", soma_elementos(mil, 1000));


free(mil);
return 0;
}

