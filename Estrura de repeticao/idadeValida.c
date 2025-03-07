#include <stdio.h>
int main(){
    int idade;

    printf("Digite uma idade valida: ");
    scanf("%d", &idade);

    while((idade < 0) || (idade > 120)){
    printf("Digite uma idade valida: ");
    scanf("%d", &idade);
}
    printf("Idade valida");
}