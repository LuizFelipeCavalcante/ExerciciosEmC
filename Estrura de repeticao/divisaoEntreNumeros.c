#include <stdio.h>
int main(){
    float a, b;
    printf("Digite o numerador: ");
    scanf("%f", &a);

    do{
    printf("Digite o denominador: ");
    scanf("%f",&b);}
    while(b == 0);

        printf("%f", a/b);
    
    
    return 0;
}