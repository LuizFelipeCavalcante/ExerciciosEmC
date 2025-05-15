#include <stdio.h>
#include <stdlib.h>


int main(){

   int *mil;
   int n, numero;
   scanf("%d", n);
mil = (int *)malloc(n * sizeof(int));


for(int i = 0; i < n; i++){
   scanf("%d", numero);
    mil[i] = numero;
    
}
for(int i = 0; i < n; i++){
  printf("%d ", mil[i]);
    
}


free(mil);
return 0;
}

