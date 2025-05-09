#include <string.h>
#include <stdio.h>

int main(){

    char str[20];

    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    int len = strlen(str);
    int palindromo = 0;
    int j = len - 1;

    for(int i = 0; i <= j; i++){
        if(str[i] != str[j]){
            palindromo = 0;
            break;
        }
        palindromo = 1;
        j --;
    }
    if(palindromo == 1){
        printf("É um palindromo");
    }else{
        printf("Nao e um palindromo");
    }
    return 0;
}