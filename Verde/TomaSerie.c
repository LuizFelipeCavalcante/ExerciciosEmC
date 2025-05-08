#include <stdio.h>

int main(){
    float s;
    int n, numerador = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        s = numerador/i * 1.00; 
        numerador =+ 2;
    }
    printf("%.2f", s);
    return 0;
}