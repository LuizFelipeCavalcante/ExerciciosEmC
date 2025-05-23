#include <stdio.h>
#include <string.h>

int main() {
FILE *arquivo = fopen("dados.txt", "w");
if (arquivo == NULL) {
printf("Erro ao abrir o arquivo.\n");
return 1;
}
char str1[20];
char str2[20];
char str3[20];
int a, b, c;

 scanf("%[^\n]", str1);
 scanf("%[^\n]", str2);
 scanf("%[^\n]", str3);

fprintf(arquivo, "Olá, mundo!\n");
fprintf(arquivo, "Escrevendo no arquivo...\n");
fclose(arquivo);
return 0;
}