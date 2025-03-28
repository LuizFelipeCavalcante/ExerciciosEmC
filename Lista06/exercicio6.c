# include <stdio.h>

void classificaNumero(int n, int *positivos, int *negativos){
    if(n > 0){
        *positivos += 1;
    }else if(n < 0){
        *negativos += 1;
    }else{}
}

int main(){
    int numero;
    int positivo = 0, negativo = 0;

    do{
        scanf("%d", &numero);
        classificaNumero(numero, &positivo, &negativo );
    }while(numero != 0);
    printf("\n%d %d", positivo, negativo);
}