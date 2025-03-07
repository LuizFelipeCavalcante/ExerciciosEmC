#include <stdio.h>
int main(){
    int num;
    printf("Digite num: ");
    scanf("%d", &num);
    if(num % 5 == 0){
        printf("Multiplo de 5");
    }
    return 0;
}