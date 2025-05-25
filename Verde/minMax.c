#include <stdio.h>

int esoma(int n, int s){
    int resultado = 0;
    while(n > 0){
        resultado += n%10;
        n = n / 10;
    }
    return resultado == s ? 1 : 0;
}

int main(){

    int s, a, b;
    int maior = 0;
    scanf("%d", &s);
    scanf("%d", &a);
    scanf("%d", &b);
    int menor = b;
    for(a; a <= b; a++){
        if(esoma(a, s)){
            if(a < menor){
                menor = a;
            }else if(a > maior){
                maior = a;
            }
        }
    }
    printf("%d \n", menor);
    printf("%d", maior);
    return 0;
}