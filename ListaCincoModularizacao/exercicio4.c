#include <stdio.h>

double umSobreImpar(int n){

    return 1.00/(n*2+1);
}

double somaUmSobreImpar(int n){

    double total;
    for(int i; i < n; i++){
        
        total += umSobreImpar(i);
    }
    return total;
}

int main(){
    int a;
    
    scanf("%d", &a);
    printf("%f",umSobreImpar(a));
    return 0;
}

