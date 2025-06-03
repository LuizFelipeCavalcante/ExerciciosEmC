#include <stdio.h>
#include <string.h>

int main() {
FILE *arquivo = fopen("dados.txt", "r");
if (arquivo == NULL) {
printf("Erro ao abrir o arquivo.\n");
return 1;
}
char linha[100];
while (fgets(linha, 100, arquivo) != NULL) {
printf("%s", linha);
}
fclose(arquivo);
return 0;
}