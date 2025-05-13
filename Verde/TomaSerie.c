#include <stdio.h>

int main(){
    float s = 0.00;
    int n, numerador = 1;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        s += (float)numerador/i; 
        numerador += 2;
    }
    printf("%.2f", s);
    return 0;
}