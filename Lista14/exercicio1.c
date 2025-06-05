#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
} Pessoa;

void imprimirPessoa(Pessoa pessoa){
    printf("%s\n", pessoa.nome);
    printf("%d\n", pessoa.idade);
}

int main(){
    Pessoa pessoa;

    scanf("%[^\n]", pessoa.nome);
    scanf("%d", &pessoa.idade);
    imprimirPessoa(pessoa);
    return 0;
}