#include <stdio.h>

int par(int n){
    
    return n*2;
}

void mostrarParesEmOrdemDecrescente(int n){
    int a = par(n);
    while(a > 0){
        
        printf("%d, ", a);
        a = a-2;
    }
    return;
}

int main(){
    int a;
    
    scanf("%d", &a);
    mostrarParesEmOrdemDecrescente(a);
    return 0;
}

