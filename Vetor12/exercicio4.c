#include <stdio.h>
#include <stdlib.h>

int main(){
    
    
   int *a;
   float *b;
   char *c;
a = (int *)malloc(sizeof(int));
b = (float *)malloc(sizeof(float));
c = (char *)malloc(sizeof(char));

scanf("%d", a);
scanf("%f", b);
scanf(" %c", c);
printf("%p %p %p", *a, *b, *c);

printf("Endereço do inteiro: %p\n", (void *)a);
printf("Endereço do float: %p\n", (void *)b);
printf("Endereço do char: %p\n", (void *)c);


free(a);
free(b);
free(c);
return 0;
}

