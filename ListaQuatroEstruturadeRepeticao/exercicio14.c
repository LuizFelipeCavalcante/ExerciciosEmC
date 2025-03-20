#include <stdio.h>

int main(){

    int n;
    float total = 0.0;

    printf("Digite o numero: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++ ){
        total = total + 1.0/i;
        
    }
    printf("%f", total);
    return 0;
}