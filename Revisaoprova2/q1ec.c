#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v1[20];
    int *v2;
    int count = 0;

    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        *(v1 + i) = rand() % 100 + 1;
        if (*(v1 + i) % 3 == 0) count++;
    }

    v2 = malloc(count * sizeof(int));

    int j = 0;
    for (int i = 0; i < 20; i++) {
        if (*(v1 + i) % 3 == 0) {
            *(v2 + j) = *(v1 + i);
            j++;
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", *(v2 + i));
    }

    free(v2);
    return 0;
}
