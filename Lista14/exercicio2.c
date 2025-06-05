#include <stdio.h>
#include <string.h>

typedef struct{
    char titulo[50];
    char autor[50];
    int anoPublicacao; 
}Livro;

int main(){
    Livro livro;
    scanf("%[^\n]", livro.titulo);
    scanf(" %[^\n]", livro.autor);
    scanf("%d", &livro.anoPublicacao);

    printf("%s\n", livro.titulo);
    printf("%s\n", livro.autor);
    printf("%d", livro.anoPublicacao);

    
    return 0;
}