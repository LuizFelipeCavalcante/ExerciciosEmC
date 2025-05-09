#include <string.h>
#include <stdio.h>

int main(){

    char str[20];
    char str2[20];
    int len = strlen(str);

    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    int j = len;
    for(int i = 0; j >= 0 ; i++){
        str2[i] = str[j];
        j --;
        printf("%C", str2[i]);
    }

    
    
    return 0;
}