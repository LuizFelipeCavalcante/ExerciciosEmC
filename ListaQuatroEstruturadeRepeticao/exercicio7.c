#include <stdio.h>
int main(){

    float nota;
    do{
        printf("Nota: ");
        scanf("%f", nota);
    }
    while((nota < 0) || (nota > 10))
    
    return 0;
}