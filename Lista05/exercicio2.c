# include <stdio.h>

int main(){
    int numero;
    scanf("%d", &numero);

    for(int i = numero; i > 0 ; i--){

        for(int a = 1; a <= i; a++){
            printf("%d", a);
        }
        
        printf("\n");
    }
}