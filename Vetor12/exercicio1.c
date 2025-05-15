#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int numero = rand();
   int *mil;
mil = (int *)malloc(1000 * sizeof(int));


for(int i = 0; i < 1000; i++){
   numero = rand() % 10 + 1;
    mil[i] = numero;
    printf("%d ", mil[i]);
}



free(mil);
return 0;
}

