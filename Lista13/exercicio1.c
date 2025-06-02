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

 scanf("%[^\n] %d", str1, &a);
 scanf("%[^\n] %d", str2, &b);
 scanf("%[^\n] %d", str3, &c);

fprintf(arquivo, "%s\n", str1);
fprintf(arquivo, "%s\n", str2);
fprintf(arquivo, "%s\n", str3);
fclose(arquivo);
return 0;
}