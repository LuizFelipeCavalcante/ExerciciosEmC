#include <stdio.h>
int main(){
    int a = 1, b = 1, c;
    int qnt;
    int cont = 3;

    printf("Escreva seu numero: ");
    scanf("%d", &qnt);
    if((qnt == 1) || (qnt == 2)){
        printf("%d", a); 
    }else{
    while(qnt >= cont){
        c = a+b;
       
       b = a;
       a = c;
       cont++;

    }
    printf("%d", a);
}
return 0;
}