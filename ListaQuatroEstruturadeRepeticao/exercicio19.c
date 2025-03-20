#include <stdio.h>

int main(){

    int x, y;

    do{
        printf("Digite a coordenada x: ");
        scanf("%d", &x);
        printf("Digite a coordenada y: ");
        scanf("%d", &y);

        if(x > 0){

            if(y > 0){
                printf("Esta no primeiro quadrante \n");
            }else
            printf("Esta no quarto quadrante \n");
        } 
        else if(y > 0){
            printf("Esta no segundo quadrante \n");
        }
        else if(y < 0){
            printf("Esta no terceiro quadrante \n");
        }
    }while((y != 0) && (x != 0));
}