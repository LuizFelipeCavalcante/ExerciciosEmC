#include <stdio.h>
int main(){
    float num;
    printf("Digite num: ");
    scanf("%f", &num);
    if(num > 0){
        printf("Maior que 0");
    }else if(num < 0){
        printf("Menor que 0");
    }else{
        printf("igual a 0");
    }
    return 0;
}