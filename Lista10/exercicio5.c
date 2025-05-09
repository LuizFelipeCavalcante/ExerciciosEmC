#include <string.h>
#include <stdio.h>

int main(){

    char str[20];
    char str2[20];
    

    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    int len = strlen(str);

    int j = len - 1;

    for(int i = 0; j >= 0 ; i++){
        str2[i] = str[j];
        j --;
    }

    for(int i = 0; i <= len - 1 ; i++){
        str[i] = str2[i];
        printf("%c", str[i]);
    }

    
    
    return 0;
}