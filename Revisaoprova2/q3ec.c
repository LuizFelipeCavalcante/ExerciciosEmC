#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somDiagonal(int *m, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            soma += *(m + i * n + j);
    return soma;
}

int main() {
    int n;
    scanf("%d", &n);
    int *mat = malloc(n * n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n * n; i++)
        *(mat + i) = rand() % 100 + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", *(mat + i * n + j));
        printf("\n");
    }

    printf("%d\n", somDiagonal(mat, n));
    free(mat);
    return 0;
}
