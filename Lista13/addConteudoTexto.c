#include <stdio.h>
int main() {
FILE *arquivo = fopen("exemplo.txt", "a");
fprintf(arquivo, "Nova linha adicionada.\n");
fclose(arquivo);
return 0;
}