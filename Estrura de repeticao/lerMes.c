#include <stdio.h>
int main(){
    int a, b;
    

    do{
        printf("Digite o numero: ");
        scanf("%d", &a);
    }
    while((a < 1) || (a > 12));

        printf("mes valido");
    
    
    return 0;
}