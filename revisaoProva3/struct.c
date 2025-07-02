#include <stdio.h>
typedef struct{
    char nome[50];
    char cidade[50];
}Editora;
typedef struct{

    char titulo[100];
    char autor[50];
    int ano;
    Editora editora;
}Livro;

int main(){
    Livro livroVet[1000];

    for(int i = 0; i < 1000; i++){
        scanf(" %[^\n]", livroVet[i].titulo);
        scanf(" %[^\n]", livroVet[i].autor);
        scanf(" %d", &livroVet[i].ano);
        scanf(" %[^\n]", livroVet[i].editora.nome);
        scanf(" %[^\n]", livroVet[i].editora.cidade);
    }
    for(int i = 0; i < 1000; i ++){
        printf(" %s\n", livroVet[i].autor);
        printf(" %s\n", livroVet[i].titulo);
        printf(" %d\n", livroVet[i].ano);
        printf(" %s\n", livroVet[i].editora.nome);
        printf(" %s\n", livroVet[i].editora.cidade);
    }

    return 0;
}