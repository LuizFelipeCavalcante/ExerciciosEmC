#include <stdio.h>
#include <string.h>

int main(){
    FILE *arquivo = fopen("notas.txt", "r");
if (arquivo == NULL) {
printf("Erro ao abrir o arquivo.\n");
return 1;
}
char nome[100];
float nota;
while (fscanf(arquivo, "%s %f", nome, &nota) != NULL) {
printf("%s %f", nome, nota);
}
fclose(arquivo);

    return 0;
}