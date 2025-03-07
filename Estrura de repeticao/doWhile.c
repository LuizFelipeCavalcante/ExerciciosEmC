#include <stdio.h>
int main(){
    //DoWhile verifica a condição apenas no final, apos os comandos terem sido executados
    int idade;
    do{
        printf("Digite sua idade: ");
        scanf("%d", &idade);
    }while((idade < 0) || (idade > 120));
    printf("Idade valida");
    return 0;
}