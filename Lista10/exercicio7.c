#include <string.h>
#include <stdio.h>

int main(){

    char str[20];
    char str2[20];

    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    printf("Digite a outra string: ");
    scanf("%[^\n]", str2);

    int len = strlen(str);
    int len2 = strlen(str2);
    int inserido = 0;

    for(int i = 0; i <= len - 1; i++){
        for(int j = 0; j <= len2 - 1; j++){
            if(str[i] != str[j]){
                inserido = 0;
                break;
            }else{
                inserido ++;
            }
        }
    }
   
    return 0;
}