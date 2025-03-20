#include <stdio.h>

double umSobreImpar(int n){

    return 1.00/(n*2+1);
}


int main(){
    int a;
    
    scanf("%d", &a);
    printf("%f",umSobreImpar(a));
    return 0;
}

