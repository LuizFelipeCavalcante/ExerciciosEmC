#include <stdio.h>

void terceiro(int *A, int *B, int *C){
    for(int i = 0; i < 10; i++){
        C[i] = A[i] - B[i];
    }
    return;
}

int main(){
    int A[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, B[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90}, C[10];

    terceiro(A, B, C);

    for(int i = 0; i < 10; i++){
        printf("%d ", C[i]);
    }
    return 0;
}