#include <stdio.h>
#include <stdlib.h>

double soma_acima_media(double *m, int n) {
    int total = n * n;
    double soma = 0, soma_maiores = 0, media;

    for (int i = 0; i < total; i++) soma += m[i];
    media = soma / total;

    for (int i = 0; i < total; i++)
        if (m[i] > media) soma_maiores += m[i];

    return soma_maiores;
}

int main() {
    int n;
    scanf("%d", &n);

    double *mat = malloc(n * n * sizeof(double));
    for (int i = 0; i < n * n; i++) scanf("%lf", mat + i);

    printf("%.6f\n", soma_acima_media(mat, n));

    free(mat);
    return 0;
}
