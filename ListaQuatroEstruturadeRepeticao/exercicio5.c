#include <stdio.h>

int main(){

    int n;
    int i = 1;
    int ia = 1;
    printf("Digite o numero: ");
    scanf("%d",&n);

    
    while(ia <= n)
  {
    i = 0;
    while(i < ia){

        printf("*");
        i++;
    }
    printf("\n");
    ia++;
   
    

  }

    return 0;
}