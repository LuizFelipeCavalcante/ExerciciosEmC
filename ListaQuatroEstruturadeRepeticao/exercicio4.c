#include <stdio.h>

int main(){

    int a;
    int b;
    int o = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&a);

    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    
    while(a <= b)
  {
    if(a % 5 == 0){
        printf("%d, ", a);
        o = 1;
    }
   a++;
    

  }
  if(o == 0){
    printf("Nao tem divisivel por 5 nesse intervalo");
  }

    return 0;
}