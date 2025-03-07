#include <stdio.h>
int main(){
    int maior, num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    maior = num1 > num2? num1:num2;
    printf("%d", maior);
    return 0;
}