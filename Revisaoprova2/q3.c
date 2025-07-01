#include <stdio.h>
#include <stdlib.h>

double produto(double *v, int n) {
    if (n == 0) return 1.0;
    return *v * produto(v + 1, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    double *vet = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++) scanf("%lf", vet + i);

    printf("%.6f\n", produto(vet, n));

    free(vet);
    return 0;
}
