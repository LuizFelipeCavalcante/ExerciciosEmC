# include <stdio.h>

void primos(int a, int b){
    if(a>b){
        printf("A não pode ser maior que B");
    }
    else{
        if(b >= 2){
            int primo = 0;
            int conferencia = 0;
            for(a; a <= b; a++){
                for(int i = 2; i < a; i++){
                    if(a%i != 0){
                        primo = 1;
                    }
                    else{
                        primo = 0;
                        break;
                    }
                }
                if(primo == 1){
                    printf("%d ", a);
                    conferencia = 1;
                }
            }
            if(conferencia == 0){
                printf("Não é primo");
            }
        }
    }
}



int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    primos(a, b);
}