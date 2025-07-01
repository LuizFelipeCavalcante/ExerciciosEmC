#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int existe(int *v, int n, int tam) {
    for (int i = 0; i < tam; i++) {
        if (*(v + i) == n)
            return 1;
    }
    return 0;
}

int main() {
    int vet[6];
    int *p = vet;
    int i = 0, num;

    srand(time(NULL));

    while (i < 6) {
        num = rand() % 60 + 1;
        if (!existe(vet, num, i)) {
            *(p + i) = num;
            i++;
        }
    }

    for (int j = 0; j < 6; j++) {
        printf("%d ", *(p + j));
    }

    return 0;
}
