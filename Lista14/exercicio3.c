#include <stdio.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    char nome[50];
    int altura;
    Data dataNascimento;
} Pessoa;

int gerarData(){
    
}



int main(){
    Pessoa pessoa[10];

    for(int i = 0; i < 10; i++){

        scanf("%[^\n]", pessoa[i].nome);
        scanf("%d", pessoa[i].altura);

    }

    return 0;
}