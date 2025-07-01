#include <stdio.h>
#include <stdlib.h>

int soma(int *v, int n) {
    if (n == 0) return 0;
    return *v + soma(v + 1, n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int *vet = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", vet + i);
    printf("%d\n", soma(vet, n));
    free(vet);
    return 0;
}
