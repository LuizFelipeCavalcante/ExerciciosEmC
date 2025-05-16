#include <stdio.h>
#include <stdlib.h>


int main(){

   int *mil;
   int n, numero;
   scanf("%d", &n);
   mil = (int *)malloc(n * sizeof(int));


for(int i = 0; i < n; i++){
   scanf("%d", &numero);
    mil[i] = numero;
    
}
int pesquisa, contador = 0;
scanf("%d", &pesquisa);
for(int i = 0; i < n; i++){
  if(pesquisa == mil[i]){
   contador ++;
  }
    
}
printf("%d", contador);


free(mil);
return 0;
}

