#include <stdio.h>

int par(int n){
    
    return n*2;
}

int main(){
    int a;

    scanf("%d", &a);
    
    printf("%d",par(a));
    return 0;
}

